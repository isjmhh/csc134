// if statement example2
// standard header
/*
CSC 134
M3LAB2
Joel
9/20/23
*/


// compiler directives
// (required for the program to run)
#include <iostream>
using namespace std;

// beginning of the main() method
int main() {

  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice;

  // ask the question
  cout << "Welcome to my sewers Do you choose Tunnel 1 or Tunnel 2?" << endl;
  cout << "Type 1 or 2: ";
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You chose Tunnel 1, good luck!" << endl;
  	cout << "You See someone in the distance and he is running at you!" << endl;

  }
  else if (2 == choice) {
  	cout << "You chose Sewer 2, Yuck." << endl;
  	cout << "You found a cat and a dog in this tunnel, cool!" << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice weirdo." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method
