/* RPG */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

int main()
{
	/* Home message */

	int choix; 
	
	printf ("- Beat The Students from SIO 1A -");
	printf ("\n");
	printf ("\n");
	
	printf ("[1] Commencer\n");
	printf ("[2] Quitter\n");
	printf ("Choix : ");
	scanf ("%d", &choix);
	printf ("\n");
	
	switch (choix)
	{
		case 1:
			if (choix == 1)
			{

			}
		break;
		
		case 2:
			if (choix == 2);
			{
				exit(0);
			}
		break;
		
		default:
			{
				while (choix != 1 && choix != 2)
				{
					printf ("Erreur de saisir\n");
					break;
				}
				printf ("Choix : ");
				scanf ("%d", &choix);
				printf ("\n");
			}
		break;
	}
	
	/* Select name */
	
	char playername[25];
	
	printf ("Saisir votre nom : ");
	scanf ("%s", &playername);
	system ("cls");
	printf ("Vous utilisez le nom : %s\n", playername);
	printf ("\n");
	
	/* List of ennemies */
		
	const char* ennemyname[14];
	ennemyname[0] = "Sasorishi";
	ennemyname[1] = "Achovx";
	ennemyname[2] = "Charo Irving";
	ennemyname[3] = "MakeSense";
	ennemyname[4] = "Steelserie";
	ennemyname[5] = "Adpoulayet";
	ennemyname[6] = "Bouftanass";
	ennemyname[7] = "DanielTacos";
	ennemyname[8] = "Remission";
	ennemyname[9] = "Chasanal";
	ennemyname[10] = "Kevinoob";
	ennemyname[11] = "Jeerroommee";
	ennemyname[12] = "Tomlefauxdelegue";
	ennemyname[13] = "Chasanal";
	
	/* Ennemy random */
	
	srand (time(NULL));
	int randomname = (rand() %14);
	
	/* Statistic */
	
	int playerlife = 100;
	int ennemylife = 100;
		
	int attack1 = 15; /* Ratio Attack */
	int attack2 = 10; /* Ratio Attack */
	
	int defense1 = 10; /* Ratio Defense */
	
	int ennemyattack1 = 3; /* Ratio Attack */
	int ennemyattack2 = 5; /* Ratio Attack */
	int ennemyattack3 = 10; /* Ratio Attack */
	int ennemyattack4 = 20; /* Ratio Attack */
	
	int roundfight = 0;
	
	/* Menu Battle */
	
	int menu;
	
	printf ("Un %s sauvage est apparu\n", ennemyname[randomname]);
	printf ("<Engagement de combat !>\n");
	printf ("\n");
	
	while (ennemylife > 0 && playerlife > 0)
	{
		printf ("[%s a %d points de vie]\n", playername, playerlife);
		printf ("[%s a %d points de vie]\n", ennemyname[randomname], ennemylife);
		printf ("\n");
		
		printf ("Menu : [1] Attaquer, [2] Defense\n");
		printf ("Choix : ");
		scanf ("%d", &menu);
		
		while (menu != 1 && menu != 2)
		{
			printf ("Erreur de saisir\n");
			printf ("Choix : ");
			scanf ("%d", &menu);
			printf ("\n");
			printf ("\n");
		}
		
		system ("cls");

		if (menu == 1)
		{
			printf ("[1] Tete de noeud - %d degat\n", attack1);
			printf ("[2] Masta t'abuse - %d degat\n", attack2);
			printf ("Choix : ");
			scanf ("%d", &choix);
			printf ("\n");
			printf ("\n");
			
			while (choix != 1 && choix != 2)
			{
				printf ("Erreur de saisir\n");
				printf ("Choix : ");
				scanf ("%d", &choix);
				printf ("\n");
				printf ("\n");
			}
			
			if (choix == 1)
			{
				printf ("%s dit : tete de noeud !\n", playername);
				ennemylife = ennemylife - attack1;
				printf ("[%s a maintenant %d points de vie]\n", ennemyname[randomname], ennemylife);
				printf ("\n");
			}
			
			if (choix == 2)
			{
				printf ("%s dit : masta t'abuse !\n", playername);
				ennemylife = ennemylife - attack2;
				printf ("[%s a maintenant %d points de vie]\n", ennemyname[randomname], ennemylife);
				printf ("\n");
			}	
		}
		
		if (menu == 2)
		{	
			printf ("[1] Soin - %d de vie\n", defense1);
			printf ("Choix : ");
			scanf ("%d", &choix);
			printf ("\n");
			printf ("\n");
			
			while (choix != 1)
			{
				printf ("Erreur de saisir\n");
				printf ("Choix : ");
				scanf ("%d", &choix);
				printf ("\n");
				printf ("\n");
			}
			
			if (choix == 1)
			{
				printf ("%s boit du Coca-cola et gagne +%d de point de vie!\n", playername, defense1);
				playerlife = playerlife + defense1;
				printf ("[%s a maintenant %d]\n", playername, playerlife);
				printf ("\n");			
			}
		}
		
		/* Ennemy attack */
		
		int random = (rand() % 4);
		
		if (random == 0)
		{
			printf ("%s dit : drop database !\n", ennemyname[randomname]);
			playerlife = playerlife - ennemyattack1;
			printf ("[%s a maintenant %d points de vie]\n", playername, playerlife);
			printf ("\n");
		}
		
		if (random == 1)
		{
			printf ("%s dit : tete de cafard !\n", ennemyname[randomname]);
			playerlife = playerlife - ennemyattack2;
			printf ("[%s a maintenant %d points de vie]\n", playername, playerlife);
			printf ("\n");
		}
		
		if (random == 2)
		{
			printf ("%s dit : masta t'abuse !\n", ennemyname[randomname]);
			playerlife = playerlife - ennemyattack3;
			printf ("[%s a maintenant %d points de vie]\n", playername, playerlife);
			printf ("\n");
		}
		
		if (random == 3)
		{
			printf ("%s dit : tete de noeud !\n", ennemyname[randomname]);
			playerlife = playerlife - ennemyattack4;
			printf ("[%s a maintenant %d points de vie]\n", playername, playerlife);
			printf ("\n");
		}
		
		printf ("\n");
		printf ("\n");
		
		roundfight = roundfight + 1;
		printf ("<Fin du tour %d>\n", roundfight);
		printf ("\n");
	}
	
	Sleep (5000);
	system ("cls");
	
	/* Result */
	
	if (playerlife >= 0)
	{
		printf ("[%s a gagne avec facilite]\n", playername);
	}
	else
	{
		printf ("[%s a perdu contre %s]\n", playername, ennemyname[randomname]);
		return 0;
	}

	Sleep (3000);
	system ("cls");
	printf("<Preparez-vous pour le combat final !>\n");
	
	Sleep (5000);
	system ("cls");

	/* Boss Battle */
	
	roundfight = 0;
	
	char bossname[25] = "ABOMINABLE CHOUAKI";
	
	printf ("Un %s sauvage est apparu\n", bossname);
	printf ("<Engagement de combat !>\n");
	printf ("\n");
	
	playerlife = 100;
	int bosslife = 1000000;
	
	while (playerlife > 0)
	{
		printf ("[%s a %d points de vie]\n", playername, playerlife);
		printf ("[%s a %d points de vie]\n", bossname, bosslife);
		printf ("\n");
		
		printf ("Menu : [1] Attaquer, [2] Defense\n");
		printf ("Choix : ");
		scanf ("%d", &menu);
		
		while (menu != 1 && menu != 2)
		{
			printf ("Erreur de saisir\n");
			printf ("Choix : ");
			scanf ("%d", &menu);
			printf ("\n");
			printf ("\n");
		}
		
		system ("cls");

		if (menu == 1)
		{
			int attack;
			
			printf ("[1] Tete de noeud - %d degat\n", attack1);
			printf ("[2] Masta t'abuse - %d degat\n", attack2);
			printf ("Choix : ");
			scanf ("%d", &attack);
			printf ("\n");
			printf ("\n");
			
			while (choix != 1 && choix != 2)
			{
				printf ("Erreur de saisir\n");
				printf ("Choix : ");
				scanf ("%d", &choix);
				printf ("\n");
				printf ("\n");
			}
			
			if (attack == 1)
			{
				printf ("%s dit : tete de noeud !\n", playername);
				bosslife = bosslife - attack1;
				printf ("[%s a maintenant %d points de vie]\n", bossname, bosslife);
				printf ("\n");
			}
			
			if (attack == 2)
			{
				printf ("%s dit : masta t'abuse !\n", playername);
				bosslife = bosslife - attack2;
				printf ("[%s a maintenant %d points de vie]\n", bossname, bosslife);
				printf ("\n");
			}
		}
		
		if (menu == 2)
		{	
			printf ("[1] Soin - %d de vie\n", defense1);
			printf ("Choix : ");
			scanf ("%d", &choix);
			printf ("\n");
			printf ("\n");
			
			while (choix != 1)
			{
				printf ("Erreur de saisir\n");
				printf ("Choix : ");
				scanf ("%d", &choix);
				printf ("\n");
				printf ("\n");
			}
			
			if (choix == 1)
			{
				printf ("%s boit du Coca-cola et gagne +%d de point de vie!\n", playername, defense1);
				playerlife = playerlife + defense1;
				printf ("[%s a maintenant %d]\n", playername, playerlife);
				printf ("\n");			
			}
		}
		
		/* Ennemy attack */
		
		while (roundfight < 3)
		{
			printf ("ABOMINABLE CHOUAKI dit : Fais attention ! tu vas te prendre mon 45 dans ta gueule !\n");
			printf ("[%s a maintenant %d points de vie]\n", playername, playerlife);
			break;
		}
		
		while (roundfight == 3)
		{
			playerlife = playerlife - playerlife;
			printf ("ABOMINABLE CHOUAKI utilise : chaussure 45 dans ta gueule\n");
			printf ("[%s a maintenant %d points de vie]\n", playername, playerlife);
			
			Sleep (9000);
			system ("cls");
			printf ("[%s a perdu]\n", playername);
			printf ("[%s a gagne avec facilite]\n", bossname);
			printf ("\n");
			printf ("ABOMINABLE CHOUAKI dit : je te l'avais dis !\n");
			printf ("\n");
			
			system("pause");
			return 0;
		}
		
		printf ("\n");
		printf ("\n");
		
		roundfight = roundfight + 1;
		printf ("<Fin du tour %d>\n", roundfight);
		printf ("\n");
	}
	system("Pause");	
	return 0;
}
