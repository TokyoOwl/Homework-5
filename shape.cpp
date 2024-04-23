#include <iostream>
using namespace std;
class Shape
{
public:
  virtual double calculate_area(double radius)
  {
    return 3.14*radius*radius;
  }
virtual double calculate_area(int base, int height)
  {
    return 0.5*base*height;
  }
virtual double calculate_area(double length, double width)
  {
    return length * width;
  }
};
class Circle : Shape 
{
  double radius;
public:
  Circle(double radius){
    this->radius = radius;
  }
  void print_area()
  {
    cout << calculate_area(radius) << endl;
  }
};
class Rectangle : Shape 
{
  double length;
  double width;
public:
  Rectangle(dobule length, double width)
  {
    this->length = length;
    this->width = width;
  }
  void print_area()
  {
    cout << calculate_area(length, width) << endl;
  }
};
class Triangle : Shape 
{
  int base;
  int height;
public:
  Rectangle(int base, int height)
  {
    this->base = base;
    this->height = height;
  }
  void print_area()
  {
    cout << calculate_area(base, height) << endl;
  }
};
void main()
{
  Circle a(5);
  a.print_area();
  Rectangle b(2, 4);
  b.print_area();
  Triangle c(4, 10);
  c.print_area();
}
