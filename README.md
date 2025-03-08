## EtherEye_Wi-fi_Grab
A Wi-fi grab *one-line* script for Windows (10 &amp; 11)

![Leonardo_Phoenix_A_stylized_logo_for_EtherEye_WIFI_GRAB_a_comp_1](https://github.com/user-attachments/assets/953fa6e8-6306-40e4-a4fa-8bb71bd032ec)

***🔒 A powerful and simple hacking script (cmd and powershell) for Windows network assessment, designed to test network configuration resilience and user security awareness.***

# 🎯 Features
- Automated extraction of stored Wi-Fi credentials on Windows systems
- Data exfiltration via Discord webhook 
- Stealth mode with automatic log cleanup
- Attiny85 compatibility for physical attack simulations

# Execution Vectors
## Shell Injection Modes

- Direct shell execution on target Windows system (only one line)
- Delivery via .bat or .exe file formats
- (Bad) USB vector (Attiny85) using the .ino file

## The .ino file

If the ethereye.ino file doesn’t work for any reason, I’ve created a PowerShell script (*ethereye.ps1*) that performs the same function as the .bat file and can be executed directly by **ATtiny85** ⚡. The reference code is in ***ethereye2.ino***.

🔧 Make sure to correctly enter your **webhook address** in the PowerShell file and the **link to your script** in the Bad USB ino file 💻.

# ⚠️ Disclaimer
This tool is released exclusively for:

- *Professional Penetration Testers*
- *Red Team Operators*
- *Security Researchers*
- *Certified Ethical Hackers*
- *Authorized Security Exercises*

***Like all security testing tools, EtherEye must only be used on systems and networks for which you have explicit written authorization. Improper use of this tool may violate local and international laws.***
