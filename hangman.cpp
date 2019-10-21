#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

void AddNewWord();

int main(int argc, char* argv[]){

    cout << "Welcome Hangman" << endl << endl;
    int menuOption;
    do{
        cout << "1. Add new word" << endl;
        cout << "2. Play Hangman" << endl;
        cout << "3. Quit" << endl;
        cout << "Your option: ";
        cin >> menuOption;
    }while (menuOption != 3);



	return 0;
}
void AddNewWord(){


}
