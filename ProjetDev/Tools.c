#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include "Tools.h"


//---------------------------------
// Pour utiliser les couleurs
//---------------------------------
void setColor(WORD color, WORD backgroud) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color + (backgroud * 16));
}

//-----------------------
// Appel des couleurs
//-----------------------
WORD getColor() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    return consoleInfo.wAttributes;
}

//-----------------------
// Lecture du clavier
//-----------------------
char readKey() {
	char c = '\0';
	char key = '\0';
	bool ext_keys = false;

	while (key == '\0')
	{
		c = _getch();
		if (c == SPECIAL_KEYS)
		{
			c = _getch();
			c -= EXT_KEYS;
			ext_keys = true;
		}
		switch (c)
		{
		case CURSOR_UP - EXT_KEYS:
		case CURSOR_LEFT - EXT_KEYS:
		case CURSOR_DOWN - EXT_KEYS:
		case CURSOR_RIGHT - EXT_KEYS:
			if (ext_keys)
			{
                key = c;
				ext_keys = false;
			}
			break;
        case ESC:
            key = c;
            break;
        }
	}
	return key;
}

//-------------------------------------
// Lecture d'une chaîne de caractère
//-------------------------------------
bool isInTemplate(const char* strTemplate, char c)
{
    if (strTemplate != NULL && strchr(strTemplate, c) == NULL)
        return false;
    return true;
}

//-------------------
// Lecture du menu
//-------------------
char readMenu(const char* strTemplate)
{
    char c = 0;
    int lenght = 0;
    char choice = 0;
    while (c != ENTER || lenght == 0) {
        c = _getch();
        switch (c)
        {
            case '\b': // backspace
            case ESC:
                if (lenght > 0) {
                    printf("\b \b");
                    lenght--;
                }
                break;
            default:
                if (lenght == 0 && isInTemplate(strTemplate, c)) {
                    printf("%c", c);
                    lenght++;
                    choice = c;
                }
                break;
        }
    }
    return choice;
}

//-----------------------
// Lecture du nom
//-----------------------
int readName(char* value, int maxLenght)
{
    char c = '\0';
    int lenght = 0;
    while (c != ENTER || lenght == 0) {
        c = _getch();
        switch (c)
        {
            case '\b': // backspace
                if (lenght > 0) {
                    printf("\b \b");
                    lenght--;
                    *(value + lenght) = '\0';
                }
                break;
            case ESC:
                while (lenght > 0) {
                    printf("\b \b");
                    lenght--;
                    *(value + lenght) = '\0';
                }
                break;
            default:
                if (c >= ' ' && lenght < maxLenght && c >= '0' && c <= 'z') {   // ' ' = 32
                    printf("%c", c);
                    *(value + lenght) = c;
                    lenght++;
                    *(value + lenght) = '\0';
                }
                break;
        }
    }
    return lenght;
}
