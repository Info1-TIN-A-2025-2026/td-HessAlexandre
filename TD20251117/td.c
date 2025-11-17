#include <stdio.h>
//______LES FONCTIONS________

void proc(void); // Prototype de la fonction proc
void f1(const int a); // prototype de la fonction F1

int main(int argc, const char *argv[])
{
	int i = 0;
	proc();

	printf("Entrez une valeure entière:\n");
	scanf("%d", &i);
	f1(i); // Ne pas oublier d'introduire 1 argument entre paranthèses (ici un 23)
	return 0;
}

void proc(void)
{
	puts("Bonjour !");
	return;
}


//___________F1: afficher a * 3__________________
// void f1(int a); Ce serait son prototype
//Ne pas oublier que si a ne change pas, mettre en CONST ! (soit const int a)
void f1(const int a) {
	printf("%d\n", 3 * a);
}
