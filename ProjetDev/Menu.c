#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include "Tools.h"
#include "Menu.h"
#include "Types.h"
#include "Historique.h"


//----------------------------
// Affiche le menu principal
//----------------------------
void printMenu()
{
    system("cls");
    for (int a = 0; a < 5; a++) {
        printf("\n");
    }
    for (int line = 0; line < 18; line++) {
        switch (line) {
            case 0:
                printf("                                 \xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF\n");
                break;
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            case 14:
            case 16:
                printf("                                 \xB3                                                  \xB3\n");
                break;
            case 2:
                printf("                                 \xB3                  PROJET DEV                      \xB3\n");
                break;
            case 4:
                printf("                                 \xB3\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xB3\n");
                break;
            case 6:
                printf("                                 \xB3  1 - Types de plante                             \xB3\n");
                break;
            case 9:
                printf("                                 \xB3  2 - Historique                                  \xB3\n");
                break;
            case 11:
                printf("                                 \xB3  3 - QUITTER...                                  \xB3\n");
                break;
            case 13:
                printf("                                 \xB3                                   4 - A PROPOS   \xB3\n");
                break;
            case 15:
                printf("                                 \xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9\n");
                break;
        }
    }
    printf("\n                                 Votre choix : ");
}

//-----------------------------------
// Les différentes types de plantes
//-----------------------------------
void typePlante()
{
    system("cls");
    plantes();
}

//----------------------------------
// Historique des plantes visitées
//----------------------------------
void historiquePlante()
{
    historique();
}

//------------------
// Quitter le jeu
//------------------
char quit()
{
    char quitter = 0;
    printf("\n\n\tVoulez vous vraiment : \n\t1 : Oui \n\t2 : Non\n\n\t> ");
    quitter = readMenu("12");
    if (quitter == '1')
        return '3';
    return '\0';
}

//--------------
// Les crédits
//--------------
void about()
{
    system("cls");
    for (int a = 0; a < 5; a++) {
        printf("\n");
    }
    for (int line = 0; line < 18; line++) {
        switch (line) {
            case 0:
                printf("                                 \xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF\n");
                break;
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            case 14:
            case 16:
                printf("                                 \xB3                                                  \xB3\n");
                break;
            case 2:
                printf("                                 \xB3                      CREDITS                     \xB3\n");
                break;
            case 4:
                printf("                                 \xB3\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xB3\n");
                break;
            case 6:
                printf("                                 \xB3  PAYEN Astrid                                    \xB3\n");
                break;
            case 9:
                printf("                                 \xB3  BERKAINE Brayan                                 \xB3\n");
                break;
            case 11:
                printf("                                 \xB3                                                  \xB3\n");
                break;
            case 13:
                printf("                                 \xB3                                                  \xB3\n");
                break;
            case 15:
                printf("                                 \xB3                                                  \xB3\n");
                break;
            case 17:
                printf("                                 \xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9\n");
                break;
        }
    }
    printf("\n                                 \t      Appuyez sur une touche.");
    _getch();
}

//------------------
// Menu principale
//------------------
void mainMenu()
{
    char choice = '\0';
    do {
        printMenu();
        choice = readMenu("1234");
        switch (choice) {
            case '1':
                typePlante();
                break;
            case '2':
                historiquePlante();
                break;
            case '3':
                choice = quit();
                break;
            case '4':
                about();
                break;
        }
    } while (choice != '3');
}
