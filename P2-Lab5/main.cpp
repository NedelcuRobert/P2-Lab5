#include "caineFaraPete.h"

int main() {

	CCaine caine;

	caine.citire_caine();
	caine.afisare_caine();

	CCaineCuPete caine_pete;

	caine_pete.citire_caine_pete();
	caine_pete.afisare_caine_pete();

	CCaineFaraPete caine_fara_pete;

	caine_fara_pete.citire_caine_fara_pete();
	caine_fara_pete.afisare_caine_fara_pete();

	return 0;
}