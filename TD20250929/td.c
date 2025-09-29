#include <stdio.h>
#include <math.h>


int main(int argc, const char *argv[])
{
	int s = 0;

	printf("Number of seconds:   ");
				// signed int = 0; signed is implicit
	scanf("%d", &s); // %d = entier signé en base 10
	
	if (s < 0) {			// Check for Error numbers (<0)
		puts("Error");
	}
	else if (s>=86400) {		// Check for Overload >24 hours to display
		puts("Overload");
	}
	else {
		unsigned int Hours = 0;
		unsigned int Minutes = 0;
		unsigned int Seconds = 0;

		Hours = s / 3600;
		Minutes = s / 60 - Hours * 60;
		Seconds = s - Minutes * 60 - Hours * 3600;			//Carefull to copy correctly, otherwise you'll get the wrong results !

		printf("%02u:%02u:%02u\n", Hours, Minutes, Seconds); // %2u => The 2 is here to force the display to 2 numbers; 0 is here to force the display of 0 if necessary;
	}
}
