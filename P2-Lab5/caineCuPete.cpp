#include "caineCuPete.h"

void CCaineCuPete::citire_caine_pete() {
	
	cout << "\nIntroduceti date caine cu pete:\n" << endl;

	citire_caine();

	cout << "Numar pete:" << endl;
	cin >> nr_pete;
}

void CCaineCuPete::afisare_caine_pete() {
	cout << "Afisare date caine cu pete:\n" << endl;

	afisare_caine();

	cout << "Numar pete:" << nr_pete << endl;
}
