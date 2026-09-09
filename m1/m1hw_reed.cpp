// CSC 134
/*
M1HW - Movie Talk
Reed, Z
8/31/26
Example: Talk about Home Alone.
*/

#include <iostream>
using namespace std;

// Starting point
int main() {

    // Purpose : Practice using string, int, and double within natural text.
    // Declare variables
    string movie_name;     // Film Title as in IMDB
    int    movie_year;     // year of release
    double movie_grossm;   // millions of USD of the gross

    // Home Alone
    movie_name = "Home Alone";
    movie_year = 1990;
    movie_grossm = 476.7; // about half a billion, internationally

    // Print the movie blurb
    cout << "The movie " << movie_name << " came out in " << movie_year << "." << endl;

    cout << "It grossed in total " << movie_grossm << " million." << endl;

    // Print a movie quote
    cout << "QUOTE:" << endl << " \t\"Keep the change, ya filthy animal.\" " << endl;

    return 0; // no errors
}

