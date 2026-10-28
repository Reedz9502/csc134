/*
CSC 134
M4HW 
reedz
10/28/2026
times table program*/



#include <iostream>
using namespace std;

int main()
{
    // ===== 1. VARIABLE DECLARATIONS =====
    int number;
    int counter = 1;

    // ===== 2. USER INPUT =====
    cout << "Enter a number from 1 to 12? ";
    cin >> number;

    // ===== 3. INPUT VALIDATION =====
    while (number < 1 || number > 12)
    {
        cout << "Please enter a number from 1 to 12: ";
        cin >> number;
    }

    // ===== 4. RESET COUNTER =====
    counter = 1;

    // ===== 5. TIMES TABLE LOOP =====
    while (counter <= 12)
    {
        // ===== 6. CALCULATION AND OUTPUT =====
        cout << number << " times " << counter
             << " is " << number * counter << "." << endl;

        // Increase counter by 1
        counter++;
    }

    // ===== 7. END PROGRAM =====
    return 0;
}