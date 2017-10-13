#include <iostream>
#include<string>
using namespace std;

class Shape
{
public:
	Shape(string a){name=a;}
	string name;
	double area;
};
void printArea(Shape arg)
{cout<<"the area of the "<<arg.name<<" is: "<<arg.area<<endl;};



class Square:public Shape
{
public:
	Square(double length):Shape("Square"){area=length*length;length=length;}
private:
	double length;
};

class Circle:public Shape
{
public:
	Circle(double radius):Shape("Circle"){area=3.14159*radius*radius;radius=radius;}
private:
	double radius;
};

class Triangle:public Shape
{
public:
	Triangle(double l):Shape("Triangle"){area=1.732/4*l*l;len=l;}
private:
	double len;
};

void main()
{
	Square square(3.21);
	Circle circle(5.66);
	Triangle triangle(3.65);
	printArea(square);
	printArea(circle);
	printArea(triangle);
}
