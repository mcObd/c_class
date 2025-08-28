# C Learning Archive

This folder contains examples, exercises, and programs that represent everything I have learned in the C programming language so far.

Contents
- Source files (.c) demonstrating topics covered in class and personal practice.
- Compiled binaries (bin/ and Debug/) and object files (obj/), produced while experimenting with builds.

Quick notes
- Files are arranged by session/section names and may include temporary or experimental files.
- Some files may not be a complete program on their own and are for demonstration or snippet purposes.

How to compile and run examples (PowerShell)

# Compile a single file with gcc
gcc -o program.exe main.c
# Run the compiled program
./program.exe

# Or compile multiple files into one executable
gcc -o c_class.exe main.c "Section 4.c" section3.c section5.c section6.c
./c_class.exe

Tips
- Use an IDE or editor that shows compilation errors (Dev-C++, Code::Blocks, Visual Studio, or VS Code with C/C++ extensions).
- Remove or rename any temporary files if you want a clean workspace.

If you want, I can:
- Add a table of contents listing each file and a short description.
- Create example-specific build scripts or a simple Makefile for Windows (MinGW) or Linux.

---
Generated: a simple README describing the folder as a complete record of C learning materials.
