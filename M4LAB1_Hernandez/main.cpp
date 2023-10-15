/*
CSC 134
M4LAB1
joel
10/15/23
*/
//Step1:print a row of blocks
//Step 2: Print a column of blocks



#include <iostream>


using namespace std;

int main()
{

    cout << "M4LAB/n" << endl;
    int height, width;


    cout << "How tall should the block be?" << endl;
    cin >> height;
    cout << "How wide should the block be" << endl;
    cin >> width;



    cout << "One row" << endl;
    for (int i=0; i <= width; i++) {
        cout << "*" << " ";
    }
    cout << endl;

    cout << "One column" << endl;
    for (int j=0; j < height; j++) {
        cout << "*" << endl;
    }


    cout << "The entire block" << endl;

    for (int j=0; j < height; j++) {
        for (int i=0; i < width; i ++) {
            cout << "*" << " ";

        }
        cout << endl;
    }
    return 0;
}
