// CSC 134
// Reedz
// M1T1 - Hello, World
// 8/24/26

// Startup
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, CSC 134!!!!"; // C-OUT, not count
    cout << endl;                 // endl or "\n" is the end of the line

    cout << "whats your name? ";
    string name;
    cin >> name;

    cout << "Nice to meet you, " << name << "." << endl;
    return 0; // no errors
}