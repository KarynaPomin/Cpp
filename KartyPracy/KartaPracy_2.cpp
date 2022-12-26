#include <iostream>
using namespace std;
int main()
{
	
	cout << "Zadanie 1" << endl;
	int a1;
	cout << "Podaj liczbe: ";
	cin >> a1;
	if (a1 % 3 == 0)
	{
		cout << "Tak" << endl;
	}
	else
	{
		cout << "Nie" << endl;
	}

	cout << "Zadanie 2" << endl;
	int a2;
	cout << "Podaj liczbe: ";
	cin >> a2;
	if (a2 < 1000 && a2 > 99 && a2 % 17 == 0)
	{
		cout << "Tak" << endl;
	}
	else
	{
		cout << "Nie" << endl;
	}

	cout << "Zadanie 3" << endl;
	int wiek;
	cout << "Ile masz lat: ";
	cin >> wiek;
	if (wiek >= 18)
	{
		cout << "Pelnoletnia osoba.";
	}
	else
	{
		cout << "Nie pelnioletnia osoba.";
	}

	cout << "Zadanie 4" << endl;
	int LIMIT = 20;
	int waga;
	cout << "Waga ciezarowki: ";
	cin >> waga;
	if (waga <= LIMIT)
	{
		cout << "Tak.";
	}
	else 
	{
		cout << "Nie.";
	}

	cout << "Zadanie 5" << endl;
	int a5, b5, c5;
	cout << "A: ";
	cin >> a5;
	cout << "B: ";
	cin >> b5;
	cout << "C: ";
	cin >> c5;
	
	if ((c5 > a5 && c5 < b5) || (c5 < a5 && c5 > b5))
	{
		cout << "Tak." << endl;
	}
	else if (a5 == b5 && b5 == c5)
	{
		cout << "Nie. Liczby sa do siebie rowne." << endl;
	}
	else
	{
		cout << "Nie." << endl;
	}

	cout << "Zadanie 6" << endl;
	int a6, p6;
	cout << "A: ";
	cin >> a6;
	cout << "B: ";
	cin >> p6;
	int p = pow(a6, p6);

	if ((p - a6) % p6 == 0)
	{
		cout << "Tak." << endl;
	}
	else
	{
		cout << "Nie." << endl;
	}

	cout << "Zadanie 7" << endl;
	int p7, k7, s7;
	cout << "Dlugosc skoku Bajtozabki: ";
	cin >> s7;
	cout << "Punkt startu: ";
	cin >> p7;
	cout << "Punkt koncowy: ";
	cin >> k7;

	if (s7 * 3 == k7 - p7)
	{
		cout << "Tak. Bajtozabka trafila do celu." << endl;
	}
	else if (s7 * 3 <= k7 - p7)
	{
		cout << "Nie. Zabraklo do pokonania dystansu "<< (k7 - p7) - (s7 * 3) << " centymetrow, czyli " << ((k7 - p7) - (s7 * 3)) / s7 << " skokow." << endl;
	}
	else if (s7 * 3 >= k7 - p7)
	{
		cout << "Tak. Bajtozabka przekroczyla swoj dystans o " << (s7 * 3) - (k7 - p7) << "centymetrow, czyli o " << ((s7 * 3) - (k7 - p7)) / s7  << " skokow." << endl;
	}

	return 0;
}
