#include <iostream>
using namespace std;
int main()
{
	cout << "KARTA PRACY 2 A" << endl << endl;

	cout << "Zadanie 1" << endl;
	int a1, b1;
	cout << "A: ";
	cin >> a1;
	cout << "B: ";
	cin >> b1;
	if ((a1 + b1) % 2 == 0)
	{
		cout << "Tak jest parzysta." << endl;
	}
	else
	{
		cout << "NIe jest parzysta." << endl;
	}

	cout << "Zaanie 2" << endl;
	int a2, b2;
	cout << "A: ";
	cin >> a2;
	cout << "B: ";
	cin >> b2;
	int g = sqrt(a2 * b2);
	int a = (a2 + b2) / 2;
	if (a > g)
	{
		cout << "Srednia arytmetyczna liczb jest wieksza." << endl;
	}
	else
	{
		cout << "Srednie geometryczna liczb jest wieksza." << endl;
	}

	cout << "Zadanie 3" << endl;
	int a3, b3, c3;
	cout << "A: ";
	cin >> a3;
	cout << "B: ";
	cin >> b3;
	cout << "C: ";
	cin >> c3;
	if (a3 == b3 && b3 == c3)
	{
		cout << "Wszystkie podane liczby sa sobie rowne." << endl;
	}
	else if ((a3 == b3 && b3 != c3) || (a3 == c3 && a3 != b3))
	{
		cout << "Tak. Sa sobie rowne " << a3 << "." << endl;
	}
	else if (b3 == c3 && b3 != a3)
	{
		cout << "Tak. Sa sobie rowne " << b3 << "." << endl;
	}
	else if (a3 != b3 && c3 != b3)
	{
		cout << "Nie. Zadna z liczb nie jest sobie rowna." << endl;
	}

	cout << "Zadanie 4" << endl;
	int a4, b4, c4, d4;
	cout << "A: ";
	cin >> a4;
	cout << "B: ";
	cin >> b4;
	cout << "C: ";
	cin >> c4;
	cout << "D: ";
	cin >> d4;
	if ((a4 < b4 || a4 == b4) && (a4 < c4 || a4 == c4) && (a4 < d4 || a4 == d4))
	{
		cout << "Najmniejsza liczba jest " << a4 << endl;
	}
	else if (b4 < a4 && (b4 < c4 || b4 == c4) && (b4 < d4 || b4 == d4))
	{
		cout << "Najmniejsza liczba jest " << b4 << endl;
	}
	else if (c4 < a4 && c4 < b4 && c4 < d4)
	{
		cout << "Najmniejsza liczba jest " << c4 << endl;
	}
	else if (d4 < a4 && d4 < c4 && d4 < b4)
	{
		cout << "Najmniejsza liczba jest " << d4 << endl;
	}

	cout << "Zadanie 5" << endl;
	int a5, b5, c5;
	cout << "A: ";
	cin >> a5;
	cout << "B: ";
	cin >> b5;
	cout << "C: ";
	cin >> c5;
	if (a5 + b5 > c5 && b5 + c5 > a5 && c5 + a5 > b5)
	{
		cout << "Tak. Wprowadzone liczby spelniaja nierownosc trojkota." << endl;
	}
	else
	{
		cout << "Nie. Wprowadzone liczby nie spelniaja nierownosc trojkota." << endl;
	}

	cout << "Zadanie 6" << endl;
	int a6, b6, c6;
	cout << "A: ";
	cin >> a6;
	cout << "B: ";
	cin >> b6;
	cout << "C: ";
	cin >> c6;

	if (a6 + b6 > c6 && b6 + c6 > a6 && a6 + c6 > b6)
	{
		cout << "Tak, da sie zbudowac trojkat ";
		if (a6 * a6 + b6 * b6 == c6 * c6 || b6 * b6 + c6 * c6 == a6 * a6 && a6 * a6 + c6 * c6 == b6 * b6)
			cout << "prostokatny." << endl;
		else if (a6 * a6 + b6 * b6 < c6 * c6 || b6 * b6 + c6 * c6 < a6 * a6 || a6 * a6 + c6 * c6 < b6 * b6)
			cout << "rozwartokatny." << endl;
		else if (a6 * a6 + b6 * b6 > c6 * c6 || b6 * b6 + c6 * c6 > a6 * a6 || a6 * a6 + c6 * c6 > b6 * b6)
			cout << "ostrokatny." << endl;
	}
	else
		cout << "Nie da sie zbudowac z wpisanych liczb trojkat." << endl;
}
