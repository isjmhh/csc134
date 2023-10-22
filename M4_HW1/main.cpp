#include <iostream>

using namespace std;
/*
CSC 134
MWHW1- Bronze
Joel
10/22/23
*/
//
int main()
{
    // declare variables
    int firstNum, secondNum, answer;
cout << "5 times table" << endl;

    firstNum = 5;
    // secondNum = 1;
    answer = firstNum * secondNum;

    // a sample message with variables

    for (int i=1; i<=12; i++) {
            answer = firstNum * i;
         cout << firstNum << " times " << i << " is " << answer<< endl;
    }
    return 0;
}
