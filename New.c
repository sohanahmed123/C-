#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

void login();
int password();
void addrecord();
void viewrecord();
void editrecord();
void editpassword();
void deleterecord();

struct record
{
    char time[6];
    char name[30];
    char place[25];
    char duration[10];
    char note[500];
};

int main()
{
    login();
    return 0;
}

void login()
{
    int attempts = 0;
    char uname[10], pword[10];

    do
    {
        printf("\n  ::::::::::::::::::::::::::  LOGIN FORM  ::::::::::::::::::::::::::  ");
        printf("\n                       ENTER USERNAME: ");
        scanf("%s", uname);
        printf("                       ENTER PASSWORD: ");
        scanf("%s", pword);

        if (strcmp(uname, "user") == 0 && strcmp(pword, "pass") == 0)
        {
            printf("\n  WELCOME TO PERSONAL DIARY MANAGEMENT SYSTEM!!! LOGIN IS SUCCESSFUL\n");
            printf("  LOADING PLEASE WAIT...\n");
            for (int i = 0; i < 3; i++)
            {
                printf(".");
                Sleep(500);
            }
            printf("\n\n\n\t\t\t\tPress any key to continue...");
            getch();
            system("cls");
            break;
        }
        else
        {
            printf("\n  SORRY! LOGIN IS UNSUCCESSFUL\n");
            attempts++;
            getch();
        }
    } while (attempts < 3);

    if (attempts >= 3)
    {
        printf("\n  Sorry, you have entered the wrong username and password for four times!!!\n");
        getch();
    }
}

int password()
{
    char pass[15] = {0}, check[15] = {0}, ch;
    FILE *fpp;
    int i = 0, j, attempts = 3;

    printf("\n<<VERIFICATION>>");
    printf("\n<<3 TRIALS ALLOWED>>");

    while (attempts > 0)
    {
        i = 0;
        printf("\n\n\tENTER THE PASSWORD: ");
        pass[0] = getch();

        while (pass[i] != '\r')
        {
            if (pass[i] == '\b')
            {
                i--;
                printf("\b \b");
                pass[i] = getch();
            }
            else
            {
                printf("*");
                i++;
                pass[i] = getch();
            }
        }
        pass[i] = '\0';

        fpp = fopen("SE", "r");

        if (fpp == NULL)
        {
            printf("\nERROR WITH THE SYSTEM FILE... [FILE MISSING]\n");
            getch();
            return 1;
        }

        i = 0;
        while (1)
        {
            ch = fgetc(fpp);
            if (ch == EOF)
            {
                check[i] = '\0';
                break;
            }
            check[i] = ch - 5;
            i++;
        }

        fclose(fpp);

        if (strcmp(pass, check) == 0)
        {
            printf("\n\n\tACCESS GRANTED...\n");
            return 0;
        }
        else
        {
            printf("\n\n\tWRONG PASSWORD.. Attempts left: %d\n\n", --attempts);
        }
    }

    // Max attempts reached
    printf("\n\n\t::YOU ENTERED WRONG PASSWORD::YOU ARE NOT ALLOWED TO ACCESS ANY FILE::\n\n\tPRESS ANY KEY TO RETURN...");
    getch(); // Pause screen
    return 1;
}
