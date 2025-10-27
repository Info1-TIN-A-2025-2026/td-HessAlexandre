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

{
	int a = 10;
	printf("%d\n", a++); // Post incrementation

	a = 10;
	printf("%d\n", ++a);
	return 0; // Pre incrementation
}