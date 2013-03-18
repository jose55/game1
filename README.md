game1
=====

introductory code into c++ games

This is the readme file distributed with the 'game1' folder. 


The main.cpp is the main c++ file for the game. The main program is contained here. All other files should be included as headers. Necessary functions/classes should be constructed in the main and moved to seperate headers as necessary. The object is clean resuable code that can be used later in more advanced games.

###################
Compliling.

Terminal:

The code can be compiiled at the command line with 
g++ main.cpp `allegro-config --libs` -o main

g++ is for c++ code, gcc would be for c code.

The -o will create an object file main.o from the code in main.cpp unless there is an error in the main.cpp. The  `allegro-config --libs` says to include the allegro.h in the compliation. 
An executable is also created. This can be executed with
./main

The code can also be compiled by typing make, this will look for a Makefile in the current directory. The make file contains the same instructions as the line above. Whichever method you choose is up to you, but do be aware both will require modifiaction as we add more files

IDE:

I've chosen to use CODEBLOCKS as an IDE as it is available on both Windows and Linux. It can be used to compile, run and debug code. If you are not comfortable with the terminal, feel free to use this. 
