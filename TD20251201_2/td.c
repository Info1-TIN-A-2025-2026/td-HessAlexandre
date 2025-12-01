#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	if (argc < 2)
	{
		printf("Usage: %s <iterations>\n", argv[0]);
		return 1;
	}

	int n = atoi(argv[1]);
	double a = 0.0;
	double p = 0.0;

	// Somme initiale
	for (int i = 0; i < n; i++)
	{
		a += pow(-1.0, i) / (2.0 * i + 1.0);
	}

	p = 4.0 * a;

	// Boucle d'amélioration
	while (fabs(p - M_PI) > 1e-4)
	{
		n++;
		a += pow(-1.0, n) / (2.0 * n + 1.0);
		p = 4.0 * a;
	}

	printf("%f\n", p);
	return 0;
}
