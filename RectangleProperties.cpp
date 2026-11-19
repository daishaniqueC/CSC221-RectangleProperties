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

  getLengthWidth (length, width);

  area = calcArea (length, width);

  perimeter = calcPerimeter (length, width);

  displayProperties (length, width, area, perimeter);

  return 0;

}