#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
using std::ofstream;
using std::ifstream;
using std::vector;

int Menu();
void AddWords();
string GetAWord();

int main(int argc, char* argv[]){
    srand(time(0));
    int menuOption;
    cout << "Welcome Hangman" << endl << endl;
    menuOption = Menu();
    while (menuOption != 3){
        if (menuOption == 1){
            AddWords();
        }else if (menuOption == 2){
            string wordToGuess = GetAWord();
            cout << "Word to Guess is: " << wordToGuess << endl;
        }

        menuOption = Menu();
    }


	return 0;
}
int Menu(){

    int menuOption;
    do{
        cout << "1. Add new word" << endl;
        cout << "2. Play Hangman" << endl;
        cout << "3. Quit" << endl;
        cout << "Your option: ";
        cin >> menuOption;
        if (menuOption < 1 || menuOption > 3)
            cerr << "Invalid Option, please input again" << endl;
    }while (menuOption < 1 || menuOption > 3);
    return menuOption;
}
void AddWords(){
    ofstream out("hangman.txt", ofstream::app);
    string word;
    while (true) {
        cout << "Your word: ";
        cin >> word;
        if (word == "END.")
            break;
        out << word << endl;
    }
    out.close();
}
string GetAWord(){
    ifstream in("hangman.txt");
    int length;
    cout << "What is the maximum length of word you want to guess: ";
    cin >> length;
    string word;
    vector<string> words;
    while (in >> word){
        if (word.length() <= length)
            words.push_back(word);
    }
    int randomPosition = rand() % words.size();


    return words[randomPosition];
}