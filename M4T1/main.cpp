#include <iostream>

using namespace std;
/*
CSC 134
M4T1 - Example loops
joel
10/2/23
*/
void hello();
void squares();


int main()
{
    cout << "M4T1 Menu" << endl;
    cout << "1. Say Hello" << endl;
    cout << "2. Table of Squares" << endl;

    int choice;
    cout << "Select: ";
    cin >> choice;
    // if statement for 1 or 2

    if (choice == 1 ) {
      hello();
    } else if (choice == 2 ) {
    squares();
    } else {
        cout << "That's not a valid choice." << endl;
    }
    return 0;
}

// define functions
void hello() {
// use a loop to say hello five times
int number = 1;
while (number <=5) {
cout << "Hello" << endl;
number = number+1;
}

}
void squares () {
// use a loop to print a table of squares
// from 1 to 10
cout << "Table of Squares" << endl;
const int MIN = 1;
const int MAX = 10;

cout << "Number\t\t" << "Number Squared" << endl;
cout << "______________________" << endl;
//print number and its square
for (int number = MIN; number <= MAX; number++) {
    int square = number * number;
    cout << number << "\t\t" << square << endl;
}
cout << "______________________" << endl;
}
