/*
CSC 134
M5LAB2
Reedz
10-28-2026
This Program Should be able to calculate the area of a rectangle
*/

#include <iostream>
#include <iomanip>
using namespace std;

// 1. FUNCTION PROTOTYPES
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

// 2. MAIN FUNCTION 
int main()
{
    // Variables for the rectangle
    double length;
    double width;
    double area;

    // Get the rectangle's length
    length = getLength();

    // Get the rectangle's width
    width = getWidth();

    // Calculate the rectangle's area
    area = getArea(length, width);

    // Display the rectangle's data
    displayData(length, width, area);

    return 0;
}

// ===== 3. GET LENGTH FUNCTION =====
double getLength()
{
    double length;

    cout << "Enter the rectangle's length: ";
    cin >> length;

    return length;
}

// ===== 4. GET WIDTH FUNCTION =====
double getWidth()
{
    double width;

    cout << "Enter the rectangle's width: ";
    cin >> width;

    return width;
}

// ===== 5. GET AREA FUNCTION =====
double getArea(double length, double width)
{
    double area;

    area = length * width;

    return area;
}

// ===== 6. DISPLAY DATA FUNCTION =====
void displayData(double length, double width, double area)
{
    cout << fixed << setprecision(2);

    cout << "\n===== Rectangle Information =====" << endl;
    cout << "Length: " << length << endl;
    cout << "Width:  " << width << endl;
    cout << "Area:   " << area << endl;
}