#!/bin/bash

# Git auto-update script with logging

# Change to your repo path (optional if you always run it from root)
cd "$(dirname "$0")"

# Get timestamp
timestamp=$(date "+%Y-%m-%d %H:%M:%S")

# Default commit message if none is passed
msg="${1:-Auto update at $timestamp}"

# Git operations
git add .
git commit -m "$msg"
git push

# Logging commit
echo "[$timestamp] $msg" >> .gitlog.txt
