#include <iostream>
#include "functions.h"

using namespace std;

/*
CSC 134
M4LAB2 - Simple Menu
Joel
10/11/2023
*/

int main()
{
    /*
    This program will do the following:
Ask the user to select option 1, 2, 3, or 4.
If they do choose 1,2, or 3, or 4, carry out an action using if block ("option one", "option two", or quit)
If they choose anything else, ask them again until they do choose a valid option.
This will give you the basis of a simple menu that you can use in your own applications.
*/
    cout << "Menu" << endl;
    cout << "1. Counting Test" << endl;
        cout << "2. Dice Roller" << endl;
    cout << "3. Total and Average" << endl;
    cout << "4. End Program" << endl;
    cout << "Your choice > ";
    int option;
    cin >> option;
    cout << "You chose" << option << endl;
    // call different functions based on choice
    if (option == 1) {
        counting_test();
    }
    else if (option == 2) {
        dice_roller();
    }
else if (option == 3) {
    total_average();
}
else if (option == 4) {
    //end program
    cout << "Goodbye!" << endl;
}
else{
    cout << "Please choose 1,2,3, or 4." << endl;
}

    return 0;
}


