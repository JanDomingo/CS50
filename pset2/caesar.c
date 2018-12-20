/*
Progammer: Jan Domingo
Date: 1/7/18
Assignment: CS50 Pset2: Caesar
Problem:    Create a program that encrypts messages using Caesar’s cipher. Create a ciphertext
            by shifting the ascii values from a user inputted plaintext by a given amount that
            is specified by the user.
*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (int argc, string argv[])

{
    //Error checks to make sure user has two user inputs
    if (argc != 2)
    {
        printf("Error: Invalid input. Try again \n");
        return 1;
    }

    //Stores the second user input as an integer
    int k = atoi(argv[1]);

    //Error checks to make sure that the user input is a positive value
    if (k < 0)
    {
        printf("Error: Negative value. Try again \n");
        return 1;
    }

    //Checks if the user inputs a valid number
    if (argc == 2)
    {
        printf("plaintext: ");
        string p = get_string();

        printf("ciphertext: ");
        for (int i = 0, n = strlen(p); i < n; i++)
        {
            //Checks if the user input is a valid character
            if (isalpha(p[i]))
            {

                //Preserves uppercase inputs
                if isupper(p[i])
                {
                    printf("%c", (((p[i] - 65) + k) % 26) + 65);
                }

                //Preserves lowercase inputs
                if islower(p[i])
                {
                    printf("%c", (((p[i] - 97) + k) % 26) + 97);
                }
            }
            else
            {
                //If the user did not input a valid character then the program will output whatever the user typed in
                printf("%c", p[i]);
            }
        }
        printf("\n");
    }
}




