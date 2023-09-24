// if statement example3
// standard header
/*
CSC 134
M3LAB2 ex:3
Joel
9/20/23
*/


#include <iostream>
using namespace std;

////
// here we use a new trick that isn't covered until "Functions",
// but the basics aren't too hard to pick up.
// So far main() has been our only function, and all code was
// located there.
//
// In this example, we add multiple functions that are used
// by main(). If this isn't clear to you, don't worry -- we
// will spend more time on them in detail later.

// declare that we are going to have more functions than main()
// (I will say "function" and "method" interchangeably)
// we should give them "verb" names, like we give our
// variables "noun" names.

void chooseHouse1();
void chooseHouse2();
void chooseStairs1();
void chooseStairs2();
void chooseDoor1();
void chooseDoor2();
// the lines above tell the program that these functions will
// exist, but we have to define them later on in the file.
////

// beginning of the main() method
int main() {

  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  int choice;

  // ask the question
  cout << "Do you choose House 1 or House 2?" << endl;
  cout << "Type 1 or 2: ";
  cin >> choice;

  if (1 == choice) {
    chooseHouse1();
    cout << "Do you want to go up Stairs1 or Stairs2?" << endl;
    cout << "Type 1 or 2: " << endl;
    cin >> choice;
    if (1 == choice) {
   chooseStairs1();
   cout << "Choose door1 to your right or door2 to your left" << endl;
   cout << "Type 1 or 2: " << endl;
   cin >> choice;
   if (1 == choice) {
    chooseDoor1();
   }
    else if (2 == choice) {
        chooseDoor2 ();



    }
   else if (2 == choice)
    chooseStairs2();
   }
  }
  else if (2 == choice) {
    chooseHouse2();
    cout << "you die while trying to defeat the zombies!!" << endl;
  }
  else {
    cout << "I'm sorry, that is not a valid choice, weirdo lol." << endl;
  }


  cout << "Thank you for playing with us kid!" << endl;
  return 0; // tells the computer that we finished without errors

} // end of the main() method

////
// After main(), we define all our other functions.
// (Declaring means "This function exists", we did that above.)
// (Defining means "This is what the function does".)
////

void chooseHouse1() {
  // this function is called in main if the user chooses 1.
  cout << "You chose House 1" << endl;
  cout << "You enter a house full of witches!" << endl;
}

void chooseHouse2() {
  // this function is called in main if the user chooses 1.
  cout << "You chose House 2" << endl;
  cout << "You enter a house full of zombies!" << endl;
}

void chooseStairs1() {
    cout << "You chose stairs 1" << endl;
    cout << "you find two doors to your right and left" << endl;
}
void chooseStairs2() {
    cout << "You chose stairs 2" << endl;
    cout << "You see a door in front of you" << endl;
}
void chooseDoor1() {
cout << "you chose door 1 to your right" << endl;
cout << "You open the door and die to demons. YOU LOSE.." << endl;
}
void chooseDoor2() {
cout << "you chose door 2 and WIN the game. YOU WIN.." <<endl;
}

// If we had a Door #3, or 4, we would add another else if to our
// main(), and then declare and define chooseDoor3() and so on.
