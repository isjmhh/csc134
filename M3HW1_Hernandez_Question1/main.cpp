#include <iostream>

using namespace std;
/*
CSC 134
M3HW1-Q1- Bronze
Joel
9/25/23
*/
//create a conversation with a chat bot
// declare
void Answeryes();
void Answerno();
void Answer1();
void Answer2();


int main()
{

    cout << "Hello, I'm a bot created by Joel!" << endl;
    cout << "Do you like me?" << endl;
    cout << " 1 for yes 2 for no " << endl;


    int choice;
    cin >> choice;
    cout << "you chose: " << choice << endl;
    // branch on the choice
    if (1 == choice) {
        Answeryes();
        cout << "Do you like school?" << endl;
        cout << " 1 for yes 2 for no " << endl;
        cin >> choice;
        if (1 == choice) {
            Answer1();
        }
        else if (2 == choice) {
            Answer2();
        }
    }
    else if (2 == choice) {
        Answerno();
    }
    else {
        cout << "Sorry, Its Ok if you are not sure" << endl;
    }

    return 0;
}
// enter functions and define
void Answeryes() {
cout << "That is great to hear i hope to be of service!" << endl;
}

void Answerno() {
cout << "That's not good but i hope you will learn to like me?" << endl;
}

void Answer1() {
cout << " Weirdo lol but why" << endl;
}
void Answer2() {
cout << " Oh, so what do you like lol?" << endl;
}
