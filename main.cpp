#include<iostream>
#include<string>
#include"Sofa.h"

using namespace std;

int main()
{
	
	string name[3];
	string made[3];
	string material[3];
	string color[3];
	int price[3];
	int legs[3];
	double width[3];
	double length[3];

	int a = 0;
	while(a < 3)
	{
		cout << "Enter Sofa name: ";
		cin >> name[a];
		cout << "Enter Sofa made: ";
		cin >> made[a];
		cout << "Enter Sofa material: ";
		cin >> material[a];
		cout << "Enter Sofa color: ";
		cin >> color[a];
		cout << "Enter Sofa price: ";
		cin >> price[a];
		cout << "Enter Sofa legs: ";
		cin >> legs[a];
		cout << "Enter Sofa width: ";
		cin >> width[a];
		cout << "Enter Sofa length: ";
		cin >> length[a];
		cout << endl;
		a++;
	}
	
	Sofa Sofa1(name[0], made[0], material[0], color[0], price[0], legs[0], width[0], length[0]);
	cout << "Name: " << Sofa1.getName() << endl;
	cout << "Made: " << Sofa1.getMade() << endl;
	cout << "Material: " << Sofa1.getMaterial() << endl;
	cout << "Color: " << Sofa1.getColor() << endl;
	cout << "Price: " << Sofa1.getPrice() << endl;
	cout << "Legs: " << Sofa1.getLegs() << endl;
	cout << "Width: " << Sofa1.getWidth() << endl;
	cout << "Lenth: " << Sofa1.getLength() << endl << endl;

	Sofa Sofa2(name[1], made[1], material[1], color[1], price[1], legs[1], width[1], length[1]);
	cout << "Name: " << Sofa2.getName() << endl;
	cout << "Made: " << Sofa2.getMade() << endl;
	cout << "Material: " << Sofa2.getMaterial() << endl;
	cout << "Color: " << Sofa2.getColor() << endl;
	cout << "Price: " << Sofa2.getPrice() << endl;
	cout << "Legs: " << Sofa2.getLegs() << endl;
	cout << "Width: " << Sofa2.getWidth() << endl;
	cout << "Lenth: " << Sofa2.getLength() << endl << endl;

	Sofa Sofa3(name[2], made[2], material[2], color[2], price[2], legs[2], width[2], length[2]);
	cout << "Name: " << Sofa3.getName() << endl;
	cout << "Made: " << Sofa3.getMade() << endl;
	cout << "Material: " << Sofa3.getMaterial() << endl;
	cout << "Color: " << Sofa3.getColor() << endl;
	cout << "Price: " << Sofa3.getPrice() << endl;
	cout << "Legs: " << Sofa3.getLegs() << endl;
	cout << "Width: " << Sofa3.getWidth() << endl;
	cout << "Lenth: " << Sofa3.getLength() << endl << endl;
	system("pause");
	return 0;
}