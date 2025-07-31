#!/bin/bash

# Move to script's directory
cd "$(dirname "$0")"

# Get current timestamp
timestamp=$(date "+%Y-%m-%d %H:%M:%S")
msg="${1:-Auto update at $timestamp}"

# Count solved .cpp problems from all sources
count=$(find ./CSES ./Codeforces -type f -name "*.cpp" | wc -l)

# Update README.md
echo "# My Competitive Programming Repo" > README.md
echo "" >> README.md
echo "### 🔢 Solved Problems: $count" >> README.md
echo "" >> README.md
echo "## 📁 Directory Structure:" >> README.md
echo '```' >> README.md
tree -I '.git|*.exe|*.out|*.in|*.o|__pycache__|.vscode' -L 3 >> README.md
echo '```' >> README.md

# Git operations
git add .
git commit -m "$msg"
git pull --rebase origin main
git push

# Log commit to local file
echo "[$timestamp] $msg" >> .gitlog.txt

