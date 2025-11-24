#include <stdio.h>
#include <math.h>

double delta(const double a, const double b, const double c);

int main(int argc, const char *argv[])
{
	double a = 0;
	double b = 0;
	double c = 0;
	double result = 0;
	printf("Entrez 3 valeures entières\n");
	scanf("%lf%lf%lf", &a, &b, &c); // Ne pas rajouter de virgules dans la zone de saisie,
	// sinon il faut aussi ajouter des virgules après dans la zone de texte !
	result = delta(a, b, c);
	printf("%.0lf", result);
	return 0;
}

double delta(double a, double b, double c)
{
	double r = 0.;
	r = b * b - 4. * a * c;
	return r;
}
//