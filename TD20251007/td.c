#include <stdio.h>

int main(int argc, const char *argv[])
{
	long volume = 42;	// m^3
	long pression = -4; // bars

	printf("volume = [%ld]\n", volume);	 // Long Decimal
	printf("volume = [%+ld]\n", volume); // Le + force l'affichage du signe

	printf("Volume = [%7ld]\n", volume);  // justifie le text à droite
	printf("Volume = [%+7ld]\n", volume); // justifie le text à droite - attention, le signe (+/-) est pris en compte dans la justification.

	printf("Volume = [%-7ld]\n", volume); // justifie le text à gauche

	printf("Pression = [%ld]\n", pression);

	// Réels

	double pi = 3.141592653589793;
	printf("pi = [%lf]\n", pi);	   // 6 chiffres après la virgule
	printf("pi = [%.2lf]\n", pi);  // .2 = 2 chiffres après la virgule
	printf("pi = [%+.2lf]\n", pi); // .2 = 2 chiffres après la virgule - + force l'affichage du signe

	double absolute_zero = -459.67;			   // °F
	printf("zero = [%.1lf]\n", absolute_zero); // 1 digit après la virgule

	printf("[%+10.2lf]\n", pi); //
	printf("[%+10.2lf]\n", absolute_zero);

	double light_speed = 299792458.0; //	m/s
									  // printf("[%+10.2lf]\n", light_speed); //shift if too big

	int num_digits = 8;						  //%.3lf, but modifiable
	printf("pi = [%.3lf]\n", pi);			  // 3 chiffres après la virgule
	printf("pi = [%.*lf]\n", num_digits, pi); // 6 chiffres après la virgule - * remplace le nombre prédéfini

	int width = 8;
	num_digits = 3;
	printf("pi = [%+*.*lf]\n", width, num_digits, pi);
}
