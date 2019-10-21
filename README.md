# Hangman

This is an example of the usage of classes `string`, `ifstream` and `ofstream`.

## Description

The program will show an initial menu:
1. Add new words to file (hangman.txt)
1. Play Hangman

If the user selects option (1) the user will be asked for strings until the user inputs END. These strings will be appended into the file `hangman.txt`.
If the user selects option (2) the program will ask the user how big can the word be (in term of letters), the program then will read the file and load into a vector the words that have a length less than or equal than the value that the user input. The program then will randomly select a word from the vector. The user then will be asked to input letters or substrings, the user will have three chances to guess. To win the user needs to input the whole correct word.


