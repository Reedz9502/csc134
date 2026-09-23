// CSC 134
// M3T1 
// reedz
// 9/23/2026
// Ask the user for the width and length of two rectangles
// Find the area

#include <iostream>
using namespace std;


int main() {

    // Variables
    double length1, width1, area1;
    double length2, width2, area2;

    // Ask user for the length and width
    cout << "First rectangle:" << endl;
    cout << "\tlength ? ";
    cin >> length1;
    cout << "\twidth ? ";
    cin >> width1;

    cout << "Second rectangle:" << endl;
    cout << "\tlength ? ";
    cin >> length2;
    cout << "\twidth ? ";
    cin >> width2;

    // Find the area
    area1 = length1 * width1;
    area2 = length2 * width2;
    // Print the area
    cout << "Rectangle 1 is area: " << area1 << endl;
    cout << "Rectangle 2 is area: " << area2 << endl;

    if (area1 > area2) {
        cout << "Rectangle 1 is larger." << endl;
    }
    else if (area2 > area1) {
        cout << "Rectangle 2 is larger." << endl;
    }
    else {
        cout << "They are the same size." << endl;
    }
    return 0;
}