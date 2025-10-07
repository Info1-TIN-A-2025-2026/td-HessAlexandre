#include <stdio.h> //used for printf & scanf
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	unsigned char num_students = 23;
	unsigned char num_chairs = 32;

	short delta = 0;

	delta = num_students - num_chairs;

	bool sw1 = true; // true (false = 0)
	bool sw2 = true; // true (false = 0)

	unsigned char state = (sw2 << 4) + sw1;

	// printf
	//  1st arg:
	//		=> format => simple String "hello world"
	//		=> Combinaison "x  =%d" %d format base 10
	//		=>%u base 10 unsigned
	//		=> %hd base 10 signed short
	printf("Number of Students = %u\n", num_students); // number of studients = 23

	// Number of students = 23, Number of chairs = 32

	printf("Number of Students = %u, Number of chairs = %u\n", num_students, num_chairs);

	// sHHHHHHort signed
	printf("Δ= %hd\n", delta);
	printf("sw1=%d\n", sw1);
	printf("sw2=%d\n", sw2);

	printf("state= %X (base 16)\n", state);
	printf("state= %d (base 10)\n", state);
	printf("state= %o (base 8)\n", state);

	char a = 'A'; // ASCII code of 'A' = 65
	printf("a= %d (base 10)\n", a);
	printf("a= %c\n", a); // C => Character

	char B = 112; // ascii code 'p'
	printf("B= %c\n", B);
	return 0;
}
