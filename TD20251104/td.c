#include <stdio.h>

int main(int argc, const char *argv[])
{
	/* const int V_min = 10;
	const int V_max = 20;
	int i = 0;

	do
	{
		int ret = 0;
		printf("Entrez un INT entre [%d...%d]: ", V_min, V_max);
		ret = scanf("%d", &i);
		if (ret != 1) {
			while(getchar()!= '\n')
				;
			// char c = 0;
			// // vider le buffer clavier
			// do {
			// 	c = getchar();

			// } while (c != '\n');
		}
	} while (i < V_min || i > V_max); // Tant que cette condition n'est pas satisfaite, on la répéte
	 // Du coup, on a vu que grâce a la fonction getchar, on peut nettoyer nos entrées de buffer.
	printf("i=%d\n", i); */

	int input = 0;

	printf("Entrez le mode de fonctionnement désiré (1,2,4): ");
	scanf("%i", &input);

	switch (input)
	{
	case 1:
		printf("ON\n");
		break;
	case 2:
		printf("OFF\n");
		break;
	case 4:
		printf("Blink\n");
		break;

	default:
		printf("ERROR\n");
		break;
	}
}
// Découverte de la fonction puts(""), qui est comme printf(), sauf que celui-ci ne peux pas traiter de variables.