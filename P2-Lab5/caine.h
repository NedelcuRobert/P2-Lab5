#include <string>
#include <iostream>

using namespace std;

class CCaine
{
protected:
	string nume;
	float inaltime;
	float greutate;
	int varsta;
	string culoare;
public:
	void citire_caine();
	void afisare_caine();
};

