#include <iostream>
#include <cmath>

using namespace std;

double input, output;
int wybor;

int main()
{
	/*
	int input;
	cout << "Wpisz rozmiar w cm: \n";
	cin >> input;

	if (input <= 0) {
	
		cout << "Rozmiar musi byc liczba i musi wiekszy niz  0 \n";
	}
	else {	
		float output = input / 2.54;
		cout << input << " cm to " << output << " cali\n";
	}
	*/
	/*
	cout << "Wybierz rodzaj konwersji\n 1. Z Celsjiusza na Farenheita\n 2. Z Farenheita na Celsjusza\n";
	cin >> wybor;
	cout << "Podaj temperature: ";
	cin >> input;

	switch(wybor) {
		case 1: 
			output = (9.0 / 5.0) * input + 32;
			cout << input << "stopni Celsjiusza w stopniach Farenheita wynosi " << output << " stopni";
			break;

		case 2:
			output = (5.0 / 9.0) * (input - 32);
			cout << input <<" stopni Farenheita w stopniach Celsjiusza wynosi " << output << " stopni";
			break;
	}
	*/
	int a;
	cout << "Podaj cyfre od 1 do 9:\n";
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "Jeden";
		break;
	case 2:
		cout << "Dwa";
		break;
	case 3:
		cout << "Trzy";
		break;
	case 4:
		cout << "Cztery";
		break;
	case 5:
		cout << "Piec";
		break;
	case 6:
		cout << "Szesc";
		break;
	case 7:
		cout << "Siedem";
		break;
	case 8:
		cout << "Osiem";
		break;
	case 9:
		cout << "Dziewiec";
		break;
	}
	if (a > 9 || a <= 0) {
		cout << "Poza zakresem";
	}

}





	

