// CSC 134
// M3LAB2 - Letter grades
// reedz
// 9/30/26
// code a program to change number grades to letter grade

#include <iostream>
using namespace std;
int main() {
    string repeat = "y";
    while (repeat == "y" or repeat == "Y"){
        cout << "Welcome to the number grade to letter grade convsersion program." << endl << endl;
        cout << "Enter a number grade (0-100): ";

        // declare variables
        int num_grade;
        char letter_grade; // only one letter long; uses single quotes like "A", not "a"
        
        cin >> num_grade;
        cout << "You entered: " << num_grade << endl;
        // Calculation -- find the letter grade

        if (num_grade >= 90) {
            letter_grade = 'A';
        }
        else if (num_grade >= 80) {
            letter_grade = 'B';
        }
        else if (num_grade >= 70) {
            letter_grade = 'C';
        }
        else if (num_grade >= 60) {
            letter_grade = 'D';
        }
        else if (num_grade < 60) {
            letter_grade = 'F';
        }

        cout << "Number Grade: " << num_grade << endl;
        cout << "Letter Grade: " << letter_grade << endl;

        cout << "Enter 'y' to repeat" << endl;
        cin >> repeat;
        // 'y' and 'Y' both should work
        if (repeat != "y" and repeat != "Y"){
            return 0;
        }
    }

    return 0;
}