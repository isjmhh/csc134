#include <iostream>



using namespace std;

void drawHLine(int width) {
for(int i = 0; i < width; i++) {
        cout << "*" << endl;
}
    cout << endl;
}


void drawVLine(int height) {
for(int j = 0; j < height; j++) {
    cout << "*" << endl;
}
    cout << endl;
}
int main()

{

    int width;
    cout << "Enter the width: " << endl;
    cin >> width;

    drawHLine(width);

    int height;
    cout << "Enter the height: ";
    cin >> height;

    drawVLine(height);

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
