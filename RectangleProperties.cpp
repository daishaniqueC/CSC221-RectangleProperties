// This program asks the user to enter the length and width of a rectangle and then calculates and displays the area and perimeter of the rectangle.

#include <iostream>
using namespace std; 

void getLengthWidth (double &length, double &width);
double calcArea (double length, double width);
double calcPerimeter (double length, double width);
void displayProperties (double length, double width, double area, double perimeter);

int main ()
{
  double length;
  double width;
  double area;
  double perimeter;
  char choice;

  do
  {

  getLengthWidth (length, width);

  area = calcArea (length, width);

  perimeter = calcPerimeter (length, width);

  displayProperties (length, width, area, perimeter);

  cout << "Would you like to calculate another rectangle? (Y/N): ";
  cin >> choice;

  } while (choice == 'Y' || choice == 'y');

  return 0;
}


// This function asks for the length and width of a rectangle and makes sure both measurements are positive numbers.
void getLengthWidth (double &length, double &width)
{
  cout << "Enter the length of the rectangle: ";
  cin >> length;

  while (length <= 0)
  {
    cout << "Invalid length. Enter a positive number: ";
    cin >> length;
  }

  cout << "Enter the width of the rectangle: ";
  cin >> width;

  while (width <= 0)
  {
    cout << "Invalid width. Enter a positive number: ";
    cin >> width;
  }
}

// This function calculates and returns the area of a rectangle.
double calcArea (double length, double width)
{
  double area;

  area = length * width;

  return area;
}

// This function calculates and returns the perimeter of a rectangle.
double calcPerimeter (double length, double width)
{
  double perimeter;

  perimeter = 2 * (length + width);

  return perimeter;
}

// This function displays the rectangle's measurements along with its calculated area and perimeter.
void displayProperties (double length, double width, double area, double perimeter)
{
  cout << "Rectangle Properties" << endl;
  cout << "Length: " << length << endl;
  cout << "Width: " << width << endl;
  cout << "Area: " << area << endl;
  cout << "Perimeter: " << perimeter << endl;
}