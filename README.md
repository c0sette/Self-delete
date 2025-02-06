# Self-Deleting Program 🗑️

## Description 📝
This is a simple C++ program that demonstrates a self-deletion mechanism. When executed, the program removes its own executable file from the system.

## ⚠️ Warning
This program permanently deletes itself upon execution. Use with caution and only for educational purposes.

## How It Works ⚙️
The program uses Windows API functions to:
1. Get its own executable path
2. Create a command to delete the file
3. Execute the delete command through cmd.exe
4. Exit the program

## Requirements 📋
- Windows operating system
- C++ compiler with Windows API support
- Required headers:
  - `<iostream>`
  - `<Windows.h>`
  - `<shellapi.h>`

## Technical Details 🔧
The program uses the following Windows API functions:
- `GetModuleFileNameW()`: Retrieves the path of the executable
- `ShellExecuteW()`: Executes the delete command
- `wsprintfW()`: Formats the command string

## Usage 📦
To compile the program, use CMake to generate the build files and then build the project. Execute the compiled program to see the self-deletion in action.