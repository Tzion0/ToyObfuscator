<p align="center">
<img src="https://github.com/user-attachments/assets/e16769d7-e065-412e-8c97-5a004b537b03" alt="Logo" style="max-width: 200px; height: 200px;">
</p>

ToyObfuscator
A GUI-based obfuscation tool that utilizes obfuscation techniques from [Obfuscator-LLVM](https://github.com/obfuscator-llvm/obfuscator) and [String Obfuscation](https://www.praetorian.com/blog/extending-llvm-for-code-obfuscation-part-1/) technique by Praetorian.

# GUI Image
<img src="https://github.com/user-attachments/assets/3730e4d7-230a-4923-9848-85ce63fed10a" alt="Main Interface" style="max-width: 400px; height: 400px;">

# Notes
Each directory serves a different purpose. The final complete executable is `ToyObfuscator-1.0-x86_64.AppImage`, which is the only file required to launch the application. Other files in the directories are the source code used to build this executable.

## ToyObfuscator Directory
This directory contains all the UI/interface code written in C++ using QT Creator.

## obfuscator Directory
This directory contains only the LLVM Obfuscation Pass implementation code based on [Obfuscator-LLVM](https://github.com/obfuscator-llvm/obfuscator) and [Praetorian](https://www.praetorian.com/blog/exending-llvm-for-code-obfuscation-part-1/).

## test_cases Directory
This directory contains sample C++ code snippets for testing purposes.
