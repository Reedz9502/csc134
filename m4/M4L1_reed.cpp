// CSC 134
// M4 Lab 1
// reedz
// 10/12/26
// Draw boxes with text

#include <iostream>
using namespace std;

int main() {
    string token = "⚃";
    //const int WIDTH = 5;
    //const int HEIGHT = 5;
    int width = 0;
    int height = 0;
    while (width <= 0 || height <= 0) {
        cout << "Enter rectangle width: ";
        cin >> width;
        cout << "Enter rectangle height";
        cin >> height;

        if (width <=0) {
            cout << "Width cannot be negative or zero";
        }
        if (height <=0) {
            cout << "Height cannot be zero or negative";
        }
    }
    for (int i = 0; i < width; i++) {
        cout << token << " "; 
    }
    cout << endl;

    for (int j = 0; j < height; j++) {
        cout << token << endl;
    }

    cout << "Here is your rectangle " << width << " by " << height << endl;
    for (int j =0; j < height; j++) {
        for (int i = 0; i < width; i++) {
            cout << token << " ";
        }
        cout << endl;
    }
}
