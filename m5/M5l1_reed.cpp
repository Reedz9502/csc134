/*
CSC 134
M5LAB1 - Choose Your Own Adventure
[name]
[date]
This template is a starting point for your own program.
We use void functions to tell a simple story.
The player makes choices, and each choice calls a function.
*/
#include <iostream>
#include <limits>
using namespace std;
// FUNCTION PROTOTYPES
// Every function you write must be listed here, above main().
// The compiler reads the file from top to bottom. A prototype
// tells it: "this function exists, and its full code is below."
void main_menu();
// TODO: add your new prototypes here
int get_choice();
void choice_airlock();
void choice_seafloor();
void choice_return();
void choice_control_room();
void choice_lights();
void choice_repair_cable();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // Start the story.
  main_menu();
  // When main_menu() returns, the story is over.
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

// FUNCTION DEFINITIONS
// The full code for each function goes here, below main().

void main_menu() {
  // A menu that accepts 1, 2, 3, or 4 (quit).
  cout << "Main Menu" << endl;
  cout << "Your research submarine is beside a damaged deep-sea station." << endl;
  cout << "Do you:" << endl;
  cout << "1. Enter through the airlock" << endl;
  cout << "2. Walk across the seafloor to the station" << endl;
  cout << "3. Return to the surface" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice = get_choice();
  cin >> choice;
  if (cin.fail()) {
    // The player typed something that is not a number.
    cin.clear(); // reset cin so it can read again
    choice = 0;  // treat it as an invalid choice
  }
  // Throw away the rest of the line the player typed.
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  if (1 == choice) {
    choice_airlock();
  } else if (2 == choice) {
    choice_seafloor();
  } else if (3 == choice) {
    choice_return();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    main_menu(); // try again
  }
}

int get_choice() {
  int choice = 0;
  cin >> choice;
  if (cin.fail()) {
    cin.clear();
    choice = 0;
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  return choice;
}

void choice_airlock() {
  cout << "The airlock opens, but the station is dark and quiet." << endl;
  cout << "Do you:" << endl;
  cout << "1. Search the control room" << endl;
  cout << "2. Return to your submarine" << endl;
  cout << "Choose: ";
  int choice = get_choice();
  if (1 == choice) {
    choice_control_room();
  } else if (2 == choice) {
    choice_return();
  } else {
    cout << "Your oxygen alarm beeps, so you head back to the submarine." << endl;
  }
}

void choice_seafloor() {
  cout << "You step onto the seafloor. A power cable has snapped nearby." << endl;
  cout << "Blue lights blink farther down the trench." << endl;
   cout << "Do you:" << endl;
  cout << "1. Follow the blue lights" << endl;
  cout << "2. Repair the power cable" << endl;
   cout << "Choose: ";
  int choice = get_choice();
   if (1 == choice) {
    choice_lights();
   } else if (2 == choice) {
    choice_repair_cable();
  } else {
    cout << "You lose sight of the station and return to the submarine." << endl;
   }
 }
 
void choice_return() {
  cout << "You seal the hatch and pilot the submarine toward the surface." << endl;
  cout << "The station's emergency beacon keeps blinking below." << endl;
}

void choice_control_room() {
  cout << "A damaged console displays one message: CREW MEMBER IN LAB 3." << endl;
  cout << "You send the coordinates to the rescue ship before leaving the station." << endl;
 }
 
void choice_lights() {
  cout << "The lights lead to a cracked observation pod." << endl;
  cout << "A trapped scientist flashes a rescue signal from inside." << endl;
  cout << "You guide the rescue team to the pod. The scientist is safe." << endl;
 }
 
void choice_repair_cable() {
  cout << "You reconnect the cable, and the station's lights come back on." << endl;
  cout << "The lab door unlocks, and the stranded crew member steps out." << endl;
  cout << "The mission is a success: everyone makes it back to the submarine." << endl;
}
 