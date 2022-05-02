#include <iostream>
using namespace std;

int yrovn()
{
	// ax+b=0
	double a;
	double b;

	cout << "enter first num: ";
	cin >> a;
	
	cout << "enter secon num: ";
	cin >> b;

	
	cout << a << " + x  + " << b << " = 0 \n";
	cout << "x = " << -(b / a) << "\n\n";
	return 0;
}

int stepen() 
{
	// num ** stepen
	double num;
	double stepen;

	cout << "enter number: ";
	cin >> num;

	cout << "enter stepen: ";
	cin >> stepen;

	cout << num << " ** " << stepen << " = " << pow(num, stepen) << "\n\n";
	return 0;
}

int cels()
{
	//convert cels
	double cels;
	double farenh;
	double kelv;
	double reaumur;
	double delil;

	cout << "enter celsius: ";
	cin >> cels;

	farenh = (cels * 9 / 5) + 32;
	kelv = cels + 273.15;
	reaumur = cels * 0.8;
	delil = cels * 148.5;

	cout << "fahrenheit: " << farenh << "\n";
	cout << "kelvin: " << kelv << "\n";
	cout << "reaumur: " << reaumur << "\n";
	cout << "delil: " << delil << "\n\n";
	return 0;
}

int val()
{
	//switch value
	int a = 10;
	int b = 20;
	int c;

	// 1 with C
	c = a;
	a = b;
	b = c;

	cout << a << " " << b << "\n";

	// 2 without C
	a = a + b;
	b = a - b;
	a = a - b;

	cout << a << " " << b << "\n\n";
	return 0;
}

int main() 
{
	yrovn();
	stepen();
	cels();
	val();
}
