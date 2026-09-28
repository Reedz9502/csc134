// CSC 134




#include <iostream>
using namespace std;

void chooseDoor1();
void chooseDoor2();
void chooseDoor3();
void chooseSecretDoor();

int main() {
    int choice;
    
    cout << "Do you choose Door 1, Door 2 or Door 3?" << endl;
    cout << "1. Choose Door #1" << endl;
    cout << "2. Choose Door #2" << endl;
    cout << "3. Choose Door #3" << endl;
    cout << "? ";
    
    cin >> choice;

    if (1 == choice) {
    chooseDoor1();
    cout << "Thank you for playing!" << endl;
    }
    else if (2 == choice) {
    chooseDoor2();
    cout << "Thank you for playing!" << endl;
    }
    else if (3 == choice) {
    chooseDoor3();
    }
    else {
    cout << "I'm sorry, that is not a valid choice." << endl;
    cout << "Thank you for playing!" << endl;
    }

    return 0;

}

void chooseDoor1() {
    cout << "You Opened Door 1" << endl;
    cout << "You win ... A NEW TRUCK!" << endl;
}
void chooseDoor2() {
    cout << "You Opened Door 2" << endl;
    cout << "You win ... A NEW PET FERRET!" << endl;
}
void chooseDoor3() {
    int secchoice;

    cout << "You Opened Door 3 and found a secret door!" << endl;
    cout << "You win ... the keys to a new house.. but you can't stop thinking about the secret door." << endl;
    cout << "If you want to open the secret door, you must give up the keys to the new house." << endl;
    cout << "Do you want to keep the house," << endl;
    cout << "or do you let your curiosity get the best of you?" << endl;
    cout << "1. Keep the house and forever wonder what was behind the door" << endl;
    cout << "2. Open the secret door and be happy with whatever you get" << endl;
    cout << "? ";
    
    cin >> secchoice;
    if (1 == secchoice) {
        cout << "You chose to keep your house, but you never will know what you missed out on." << endl;
        cout << "Thank you for playing, Enjoy your new house!" << endl;
    }
    else if (2 == secchoice) {
        chooseSecretDoor();
        cout << "Thank you for playing!" << endl;
    }
    }

void chooseSecretDoor() {
    cout << "You opened the secret door"
         << " and found a treasure chest!" << endl;
}