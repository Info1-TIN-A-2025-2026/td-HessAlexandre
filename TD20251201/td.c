#include <stdio.h>
#include <stdlib.h>


//SAPIN DE NOEL !
int main(int argc, const char *argv[])
{
	int hauteur = atoi(argv[1]); // Il faut que lignes soit impaire
	int i = 0;
	int current_line = 0;
	if (hauteur % 2 == 1)
	{
		printf("CHRISTMAS TIME ! \n");
		// Boucle pour les lignes
		for (int i = 0; i < hauteur; i++)
		{
			// Boucle pour les espaces
			for (int j = 0; j < hauteur - i - 1; j++)
			{
				printf(" ");
			}
			for (int k = 0; k < 2 * i + 1; k++)
			{
				printf("*");
			}
			printf("\n");
		}
		// Imprimer le tronc de...
		for (int n = 0; n <= 1; n++)
		{
			for (int l = 0; l <= hauteur - 2; l++)
			{
				printf(" ");
			}
			printf("|\n");
		}

		for (int m = 0; m <= hauteur - 3; m++)
		{
			printf(" ");
		}
		printf("---\n");
	}
	else
	{
		printf("Utilisez un nombre impair\n");
	}
}
