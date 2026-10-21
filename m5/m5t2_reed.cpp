/*
CSC 134
M5T2
Program that asks for one number and prints
the number and its square using one value-returning
function and one void function.
*/

#include <iostream>
using namespace std;

// Function prototypes
int square(int num);
void printAnswerLine(int number, int squared);

int main() {
    int number;

    cout << "Table of Squares Program" << endl;

    // Get input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Print the user's number and its square
    int answer = square(number);

    cout << endl;
    cout << "Your Number and Square" << endl;
    cout << "#    Square" << endl;
    printAnswerLine(number, answer);

    // Print the numbers 1 through 10 and their squares
    cout << endl;
    cout << "Numbers 1 through 10 and Their Squares" << endl;

    for (int i = 1; i <= 10; i++) {
        int result = square(i);
        printAnswerLine(i, result);
    }

    return 0;
}

// Return the square of num
int square(int num) {
    return num * num;
}

// Print one line showing the number and its square
void printAnswerLine(int number, int squared) {
    cout << number << " squared is " << squared << endl;
}