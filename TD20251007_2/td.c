#include <stdio.h>

int main(int argc, const char *argv[])
{
	float x = 0.f;
	float y = 0.f;

	int ret = 0;
	printf("enter a floating value for x: ");
	ret = scanf("%f", &x);

	// printf("x= [%.4f]\n", x);
	// printf("ret = [%d]\n", ret);

	// printf("Choose a float value for y :");
	// ret = scanf("%f", &y);
	// printf("y = [%.4f]\n", y);
	// printf("ret = [%d]\n", ret);

	printf("Enter two floating points values (Space separated)");
	ret = scanf("%f%f", &x, &y);
	printf("ret= %d\n", ret);
	printf("x= %.4f\n", x);
	printf("y= %.4f\n", y);

	// char a = 0;
	// scanf("%ld", a); //pas content, ce n'est pas supposé marcher (3 octets en mémoire écrasés en mémoire)
}