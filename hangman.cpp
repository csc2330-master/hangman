#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int Menu();

int main(int argc, char* argv[]){
    int menuOption;
    cout << "Welcome Hangman" << endl << endl;
    menuOption = Menu();
    while (menuOption != 3){


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
