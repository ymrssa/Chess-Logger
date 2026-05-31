This repository contains assets of Chess Logger device
Main purpose of the device is to log chess move notations, formatting them properly and save the notation sheet as PGN file.
Analysis systems like chess.com/analysis, lichess.com/analysis can read and display the games from PGN files to an SD card.
If any wrong move is there, these systems warn the user and can not display the game. Therefore, this device also will ease the chess referees with checking wrong notations or moves.

**Current Commits Include:**
-Button placement schematic of the device
-Screen navigation of LCD using Arduino UNO
-Save and load analogy written in C

**Button Placement Schematic**
There are 29 buttons classified as:
-1-8
-a-h
-K-N
-Short and long castle(O-O, O-O-O), takes(x), check(+), promoted to(=)
-Enter, Backspace and mate(#)
each button connects to 1, 2, 3 or 4 terminals
these terminals are read by the processor and the procecessor percieves which button is pressed based on which terminals signal HIGH

**Screen Navigation**
-Screen is splitted two sides W B (White and Black)
-29 binary codes are read by digital terminals of Arduino
-character pressed is entered to the screen
-Backspace delete the last character and rotate the cursor
-Enter tabs the cursor or move the line up whether it is black to move

**Console App and Save Analogy**
-The C file is designed to create a new or overwrite an existing PGN file
-The app begin asking the user if they want to create a new PGN file or replace an existing one
-New files are created sequential(log, log 2, log 3 etc.)
-Numpads and keys are used to enter the notations(a,b,c, K,Q, Num 1, Num2 etc.)
-Press S for short and L for long castling
-Press j for Bishop (B) to avoid confusion with the row b
-Key T is used for entering the move and turn next
-Key Y is backspace
-Key U ends the program and saves the PGN file. It ends up with the score [1-0] or [0-1] based on whose turn it is.
-Key I ends the program with a stalemate
