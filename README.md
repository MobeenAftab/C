# C

My repository containing various code snippets in C.

Folders divide C source files and grouped relevant sections together.

# Compiling C

## Linux

To run, compile and produce a C output file type the following in CLI:

`gcc "FILENAME.c" -o "FILEOUT"`

gcc = source file to compile -o = compiled source output name

Run the output file by typing: `./ "FILENAME" or make "FILENAME"` Where "FILENAME" is the same name as the compiled output source file.

## Windows

To run, compile and produce a C output file type the following in VS developer command prompt:

`'cl "FILENAME.c" -o "FILEOUT"`

cl = source file to compile -o = compiled source output name

Run the output file by typing: `"FILENAME"` Where "FILENAME" is the same name as the compiled output source file.

[Walkthrough: Compile a C program on the command line](https://msdn.microsoft.com/en-us/library/bb384838.aspx)

[Build C/C++ code on the command line](https://docs.microsoft.com/en-gb/cpp/build/building-on-the-command-line)

## Makefile

Both Linux and Windows can batch compile, clean and process C source files by running a Makefile script to call the various individual commands. Use flags to control the process of compiling source files.

[Windows NMAKE Reference](https://msdn.microsoft.com/en-us/library/dd9y37ha.aspx)
