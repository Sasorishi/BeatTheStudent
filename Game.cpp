#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

int item()


int game()
{
	char username[25];
	
	system("cls");
	printf ("Saisir votre pseudo : ");
	scanf ("%c", &username);
	system("cls");
}

int main()
{
	int choix;
	
	printf ("[1] Commencer\n");
	printf ("[2] Quitter\n");
	
	scanf ("%d", &choix);
	
	if (choix == 1)
	{
		game();
	}
	else if (choix == 2)
	{
		exit(0);
	}
	while (choix != 1 && choix != 2)
	{
		printf ("Erreur\n");
		scanf ("%d", &choix);
	}
	
	
	system ("pause");
	return 0;
}
