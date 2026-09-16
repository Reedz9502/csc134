// CSC 134
// Crate Program
// This program should be able to determine the volume, cost,
// and profit of a crate of any dimensions using user input

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Constants needed for cost
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    // Variables
    double length,  // Crate Length
           width,   // Crate Width
           height,  // Crate Height
           volume,  // Volume of the crate
           cost,    // Cost to build the crate
           charge,  // Customer charge for the crate
           profit;  // Profit made off of the crate
    
    // Set the desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint;

    // Prompt the user to give the crate's length, width, and height
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate the crate's volume, the cost to produce it,
    // the charge to the customer, and the profit
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display the calculated data.
    cout << "The volume of the crate is ";
    cout << volume << " cubic fet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;
}