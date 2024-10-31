#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <windows.h>

void login();
void registration();

void login()
{
    int i = 0;
    char uname[10], c = ' ';
    char pword[10];
    FILE *fp;
    fp = fopen("users.txt", "r");
    if (fp == NULL)
    {
        printf("No users found. Please register first.\n");
        printf("Redirecting to registration...\n");
        fclose(fp);
        registration(); // Redirecting to registration
        return;
    }

    printf("\n  ::::::::::::::::::::::::::  LOGIN FORM  ::::::::::::::::::::::::::  ");
    printf(" \n                       ENTER USERNAME:-");
    scanf("%s", uname);
    printf(" \n                       ENTER PASSWORD:-");
    while (i < 10)
    {
        pword[i] = getch();
        c = pword[i];
        if (c == 13)
            break;
        else
            printf("*");
        i++;
    }
    pword[i] = '\0';
    i = 0;

    char username[10], password[10];
    int found = 0;
    rewind(fp); // Move file pointer to the beginning
    while (fscanf(fp, "%s %s", username, password) != EOF)
    {
        if (strcmp(uname, username) == 0 && strcmp(pword, password) == 0)
        {
            found = 1;
            break;
        }
    }
    fclose(fp);

    if (found)
    {
        printf("\n  \n\n\n       WELCOME TO PERSONAL DIARY MANAGEMENT SYSTEM !!!! LOGIN IS SUCCESSFUL");
        printf("\n LOADING PLEASE WAIT... \n");
        for (i = 0; i < 3; i++)
        {
            printf(".");
            Sleep(500);
        }
        printf("\n\n\n\t\t\t\tPress any key to continue...");
        getch(); // holds the screen
    }
    else
    {
        printf("\n        SORRY !!!!  LOGIN IS UNSUCCESSFUL");
        getch(); // holds the screen
    }
    system("cls");
}

void registration()
{
    FILE *fp;
    char username[10], password[10];

    printf("\n  ::::::::::::::::::::::::::  REGISTRATION FORM  ::::::::::::::::::::::::::  ");
    printf("\n\n                       ENTER USERNAME:-");
    scanf("%s", username);
    printf("\n\n                       ENTER PASSWORD:-");
    scanf("%s", password);

    fp = fopen("users.txt", "a+");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    fprintf(fp, "%s %s\n", username, password);
    fclose(fp);

    printf("\n\n\t\t\t  Registration successful!\n");
}

int main()
{
    char choice;

    printf("\n\t\t\t PERSONAL DIARY MANAGEMENT SYSTEM");
    printf("\n\n\n\t\t\t1. Login\n\t\t\t2. Register\n\n\t\t\tEnter your choice: ");
    choice = getche();

    switch (choice)
    {
    case '1':
        login();
        break;
    case '2':
        registration();
        printf("\n\n\t\t\t  Please log in to continue.\n");
        login(); // After registration, prompt user to log in
        break;
    default:
        printf("\nInvalid choice!\n");
        break;
    }

    return 0;
}
