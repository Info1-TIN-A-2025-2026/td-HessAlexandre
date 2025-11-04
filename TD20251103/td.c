#include <stdio.h>
#include <stdlib.h>

/* int main()
{
  int w = 0;
  int count = 0;
  printf("Entrez un entier non-signé: ");
  scanf("%d", &w);

  // while (w != 0)
  // {
  //   w /= 10;
  //   ++count;
  // }

    do {   
      w /= 10;
      ++count;
    } while (w != 0);


  printf("Number of digits: %d\n", count);
} */
/* int main(int argc, char *argv[])
{
  const unsigned int base = 10;
  unsigned int = atoi(argv[1]); //n>0 non tested
  unsigned int w = 0;
  while n>0
  {
  N/= BASE; //equ. n=n/BASE
  w++;
  }
  printf("2=%u\n", w)
} */

//Nouvelle tâche: Inverser un nombre. P. ex, 12345 => 54321

int main2(int argc, char *argv[]){

  unsigned int n = atoi(argv[1]);
  unsigned int w = 0;
  w *= 10;
  w += n % 10;
  w /= 10;

  do{

  } while (n > 0);
  printf("w=%u\n", w);
}

// Ah bah ça marche plus ;(