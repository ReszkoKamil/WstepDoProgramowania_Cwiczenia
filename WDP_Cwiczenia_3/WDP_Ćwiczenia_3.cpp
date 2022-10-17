#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

	/*
	while(i < 100) {
		cout << i << endl;
		i++;
	}
	
	do {
		cout << i << endl;
		i++;
	} while (i < 100);

	for (int j = 0; j < 100; j++)
	{
		cout << j << endl;
	}

	int i = 0;
	while (i < 100){

		cout << i << endl;
	}
	*/

	/*int i = 1;
	int count = 0;
	for ( i = 1; i < 500; count++)
	{
		i = i + i;
		
	}
	cout << "Osiagniecie liczby 500 zajelo: "<< count << " interacji" << endl;
	*/

	//tabliczka mnozenia
	int i = 1;
	for ( i; i <= 10; i++)
	{
		int poprawna_odpowiedz = i * i;
		string odpowiedz;
		cout << "Ile rowne jest " << i << "*" << i << "?" << endl;
		cin >> odpowiedz;
		int odpowiedzint = stoi(odpowiedz);
		if (i*i == odpowiedzint)
		{
			cout << "Dobra odpowiedz!" << endl;

		}else{
			cout << "Zla odpowiedz! Poprawna odpowiedz to: " << poprawna_odpowiedz << endl;
		}
	}

	return 0;

}