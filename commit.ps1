#!/usr/bin/env pwsh
# Auto-commit and push all changes to GitHub

$timestamp = Get-Date -Format "yyyy-MM-dd HH:mm:ss"
$message = "DSA Update - $timestamp"

Write-Host "Adding all files..." -ForegroundColor Cyan
git add .

Write-Host "Committing changes..." -ForegroundColor Cyan
git commit -m "$message"

Write-Host "Pushing to GitHub..." -ForegroundColor Cyan
git push

Write-Host "✓ Done! Changes pushed to GitHub" -ForegroundColor Green
