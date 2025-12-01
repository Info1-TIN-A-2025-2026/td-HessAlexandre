#include <stdio.h>
#include <math.h>

int f(unsigned int t, int *a, int *b, int *c);
void c2p(const double x, const double y, double *rho, double *theta);

int main(int argc, const char *argv[])
{
	int h = 0;
	int m = 0;
	int s = 0;
	unsigned int t = 1234567;

	printf("h= %d\n", h);

	printf("adress of argv:%p\n", &argv);
	printf("adress of argc:%p\n", &argc);
	printf("adress of h:%p\n", &h);
	printf("adress of m:%p\n", &m);
	printf("adress of s:%p\n", &s);

	int r = f(t, &h, &m, &s);

	int total_seconds = 0;
	c2p(x, y, &r, &t);
}
int f(unsigned int t, int *a, int *b, int *c)
{
	printf("a = %p\nb = %p\nc = %p\n", &a, &b, &c);

	*a = t / 3600;
	*b = (t / 60) - *a * 60;
	*c = t - *a * 3600 - *b * 60;

	// Print the time in H:M:S format
	printf("%d:%d:%d\n", *a, *b, *c);
}

void c2p(const double x, const double y, double *rho, double *theta)
{
	*theta = atan2(y, x);
	*rho = sqrt(x * x + y * y);

	printf("theta =%f", *theta);
	printf("rho = %f", *rho);
}