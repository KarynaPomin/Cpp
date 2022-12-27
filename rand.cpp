#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>

using namespace std;
int main()
{
	cout << "Wylosowanie liczby z przedzialu 1...100" << endl;
	Sleep(3000);
	int liczba1;
	srand(time(NULL));
	liczba1 = rand() % 100 + 1;
	//cout << liczba1 << endl;

	//cout << "Losowanie z przedzialu 35...55" << endl;
	//int liczba2;
	//srand(time(NULL));
	//liczba2 = rand() % 21 + 35;
	//cout << liczba2 << endl;

	int los, proba = 1;
	cout << "Zgadnij wylosowana liczbe: ";
	cin >> los;
	cout << endl;
	while (los != liczba1)
	{
		if (los > liczba1)
			cout << "Liczba za duza. Spruboj jeszcze raz!" << "\a" << endl;
		else
			cout << "Liczba za mala. Spruboj jeszcze raz!" << "\a" << endl;
		proba++;
		cout << "Zgadnij wylosowana liczbe: ";
		cin >> los;
		cout << endl;
	}
	cout << "Tak! Wygrales z " << proba << " proby." << endl;

	return 0;
}
