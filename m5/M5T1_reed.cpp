// M5T1 - doubler
// reedz
// 10/19/2026
// double some numbers using basic functions

#include <iostream>
using namespace std;

void greet();
void speak(string message);

int num_add(int num);
int num_double(int num);

int main()
{
    cout << "Void Function Example" << endl;
    greet();
    speak("Hello world");
    speak("Brotherrr");
    cout << "Value Returning example" << endl;
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    int answer = num_add(number);
    cout << "num_add(" << number << ") returns: " << answer << endl;

    answer = num_double(number);
    cout << "num_double(" << number << ") returns: " << answer << endl;

    return 0;
}

// define functions
void greet() {
    cout << "What's up?" << endl;
}

void speak(string message) {
    cout << message << endl;

}


int num_add(int num) {


    num = num + 1;
    return num;

}
int num_double(int num) {

    num = num * 2;
    return num;
}
