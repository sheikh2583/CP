#!/bin/bash

cd "$(dirname "$0")"
timestamp=$(date "+%Y-%m-%d %H:%M:%S")
msg="${1:-Auto update at $timestamp}"

# 1. Update README.md before committing
tree -I '.git|*.exe|*.out|*.in|*.o|__pycache__|.vscode' -L 3 > README.md

# 2. Standard git push routine
git add .
git commit -m "$msg"
git push

# 3. Log the commit message
echo "[$timestamp] $msg" >> .gitlog.txt

