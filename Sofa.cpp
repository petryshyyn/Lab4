#include"Sofa.h"
Sofa::Sofa()
{
	Brand_Sofa = "Mark";
	Manufacturer_of_sofas = "China";
	Material_of_sofa = "Scin";
	Color_of_sofa = "Gray";
	Price_of_sofa = 3000;
	Number_of_legs = 4;
	Width_of_sofa = 1.5;
	Length_of_sofa = 3.8;
}
Sofa::Sofa(string name, string made, string material, string color, int price, int legs, double width, double length)
{
	Brand_Sofa = name;
	Manufacturer_of_sofas = made;
	Material_of_sofa = material;
	Color_of_sofa = color;
	Price_of_sofa = price;
	Number_of_legs = legs;
	Width_of_sofa = width;
	Length_of_sofa = length;
}
Sofa::~Sofa()
{

}

string Sofa::getName() const
{
	return Brand_Sofa;
}
string Sofa::getMade() const
{
	return Manufacturer_of_sofas;
}
string Sofa::getMaterial() const
{
	return Material_of_sofa;
}
string Sofa::getColor() const
{
	return Color_of_sofa;
}
int Sofa::getPrice() const
{
	return Price_of_sofa;
}
int Sofa::getLegs() const
{
	return Number_of_legs;
}
double Sofa::getWidth() const
{
	return Width_of_sofa;
}
double Sofa::getLength() const
{
	return Length_of_sofa;
}
