#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
// {
// 	int a = 0, b = 0, q = 0, r = 0;

// 	printf("Enter a:");
// 	scanf("%d", &a);

// 	printf("Enter B");
// 	scanf("%d", &b);

// 	q = a / b;
// 	r = a % b;

// 	printf("a/b = %d\n", q);
// 	printf("a%%d = %d\n", r); // %% sinon croit que c'est une variable

// 	return 0;

// }

//		Série 2:
// {
// 	int a = 10;
// 	printf("%d\n", a++); // Post incrementation

// 	a = 10;
// 	printf("%d\n", ++a);
// 	return 0; // Pre incrementation
// }
{
	int n = 0;
	int cnt = 0;
	int i = 0;

	for (n = 2; n <= 100; n++)
	{

		cnt = 0;

		// Compter tous les diviseurs de n
		for (i = 1; i <= n; i++)
		{

			// Vérifier si n est divisible par i
			if (n % i == 0)
				cnt++;
		}

		// Si n n'a que 2 diviseurs (1 et lui-même), il est premier.
		if (cnt == 2)
			printf("%d is prime\n", n);
	}

	return 0;
}
