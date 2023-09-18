#include <iostream>
#include <stdlib.h> // for rand()
#include <time.h> // for time()
using namespace std;
/*
CSC 134
M3T2- Craps
Joel
9/28/23

The player rolls
*/
//%6 give us 0 to 5, so we add one
int roll() {
    //new function: roll 1 die, return
    // number from 1 to 6 ( we use modulo)
    // %6 gives us 0 to 5, so we add one
    int roll = rand() %6+1;
    return roll;
}
int main()
{
std:: cout << "Welcome to the Craps table" << endl;
int die1, die2, total;
// roll is 2d6 (two 6-siders)
//cout << "What are the two rolls?" << endl;
//cin >> die1 >> die2;
int seed = time(0);
cout << "Today's lucky number is: " << seed << endl;
srand(seed);
//random roll
die1 = roll();
die2 = roll();
total = die1 + die2;
cout << "You rolled: ";
cout << die1 << " + " << die2;
cout << " == " << total << endl;
//DO if / else if for:
// 7 or 11 (win)
// 2, 3, 12 (lose)
if (total == 7 || total == 11){
        //|| is or
        cout << "YOU WIN" << endl;
}
else if (total == 2 || total == 3 || total == 12) {
cout << "You lose LLL" << endl;
}
else {
        cout << "Did not win or take an L" << endl;

}
return 0;
}
