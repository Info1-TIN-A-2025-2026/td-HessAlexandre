#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char *argv[])
{

	srand(time(NULL)); // Seed du générateur de randomness
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", rand()); // Rand = générateur d'aléatoire   //0...RAND_MAX (2147483647)
		printf("%d\n", RAND_MAX);
	}
	return 0;
}
