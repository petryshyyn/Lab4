#include<iostream>
#include<string>

using namespace std;

class Sofa {
public:
	string Material_of_sofa;
	int Price_of_sofa;

	Sofa();
	Sofa(string name, string made, string material, string color, int price, int legs, double width, double length);
	~Sofa();


	string getName() const;
	string getMade() const;
	string getMaterial() const;
	string getColor() const;
	int getPrice() const;
	int getLegs() const;
	double getWidth() const;
	double getLength() const;


protected:
	string Manufacturer_of_sofas;
	int Number_of_legs;
private:
	double Width_of_sofa;
	double Length_of_sofa;
	string Color_of_sofa;
	string Brand_Sofa;

};
