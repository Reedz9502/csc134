// CSC 134
// M3T2 Random Numbers
// ReedZ
// 9/23/26
// Start write a simple "Craps" casino game.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    // random number generator
    // rand() needs to be seeded with srand()
    // most "random" is to use the time
    srand(time(0));

    int roll1 = (rand() % 6) + 1;
    int roll2 = (rand() % 6) + 1;
    int total = roll1 + roll2;
    int point;
    cout << "You rolled: " << roll1 << " + " << roll2 << " = " << total << endl;
    if (total == 7 || total == 11) {
        cout << "You win!" << endl;
    }
    else if (total == 2 || total == 3 || total == 12) {
        cout << "you lose." << endl;
    }
    else {
        point = total;
        cout << "Your point number is: " << point << endl;
        cout << "Keep rolling: point is win, 7 is loss." << endl;
    }

    return 0;
}