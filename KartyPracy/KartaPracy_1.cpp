#include <iostream>
using namespace std;
int main()
{
	cout << "Zadanie 1" << endl;
	int a1;
	int b1;
	cout << "A: ";
	cin >> a1;
	cout << "B: ";
	cin >> b1;
	cout << a1*a1 + b1*b1 << endl;

	cout << "Zadanie 2" << endl;
	int a2;
	int b2;
	cout << "A: ";
	cin >> a2;
	cout << "B: ";
	cin >> b2;
	cout << pow(a2 + b2, 2) << endl;

	cout << "Zadanie 3" << endl;
	int a3;
	int b3;
	cout << "A: ";
	cin >> a3;
	cout << "B: ";
	cin >> b3;
	cout << pow(a3 - b3, 3) << endl;

	cout << "Zadanie 3" << endl;
	int a4, b4, c4;
	cout << "A: ";;
	cin >> a4;
	cout << "B: ";
	cin >> b4;
	cout << "C: ";
	cin >> c4;
	cout << a4 * b4 * c4 << endl;

	/*cout << "Zadanie 5" << endl;
	int a5, b5;
	cout << "A: ";
	cin >> a5;
	cout << "B: ";
	cin >> b5;
	cout << ((a5 + b5) * 0.4) << endl;*/

	cout << "Zadanie 6" << endl;
	int a6;
	cout << "Brutto: ";
	cin >> a6;
	cout << "Netto: " << (a6 / 1.23) << endl;

	cout << "Zadanie 7" << endl;
	int a7, b7;
	cout << "A: ";
	cin >> a7;
	cout << "B: ";
	cin >> b7;
	cout << "Reszta: " << a7 % b7;
}


