#include "caine.h"

void CCaine::citire_caine() {
	cout << "Introduceti date caine:\n" << endl;

	cout << "Nume:" << endl;
	cin >> nume;

	cout << "Inaltime:" << endl;
	cin >> inaltime;

	cout << "Greutate:" << endl;
	cin >> greutate;

	cout << "Varsta:" << endl;
	cin >> varsta;

	cout << "Culoare:" << endl;
	cin >> culoare;
}

void CCaine::afisare_caine() {
	cout << "Afisare date caine:\n" << endl;
	cout << "Nume:" << nume << endl;

	cout << "Inaltime:" << inaltime << endl;

	cout << "Greutate:" << greutate << endl;

	cout << "Varsta:" << varsta << endl;

	cout << "Culoare:" << culoare << endl;
}
