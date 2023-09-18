#include <iostream>

using namespace std;

int main() {

    cout << "Areas of Rectangles\n";
    // declare variables
    double length1, length2, width1, width2;
    // ask for length and width of first rectangle
    cout << "Rectangle 1 length? ";
    cin >> length1;
    cout << "Rectangle 1 width? ";
    cin >> width1;
    //ask for length and width of second rectangle
    cout << "Rectangle 2 length? ";
    cin >> length2;
    cout << "Rectangle 2 width? ";
    cin >> width2;
    //calculate areas

    double area, area1, area2;
  area1 = length1 * width1;
  area2 = length2 * width2;
    //Display the areas
    cout << "Rectangle 1 area is: " << area1 << endl;
    cout << "Rectangle 2 area is: " << area2 << endl;

    //comparison
    if (area > area2) {
    cout << "Rectangle 1 is larger." << endl;
    }
    else if (area2 > area1) {
            cout << "Rectangle 2 is larger." << endl;
}
else {
        cout << "Rectangle are equal size." << endl;
    return 0;
}
}
