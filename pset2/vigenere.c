/*
Progammer: Jan Domingo
Date: TBD
Assignment: CS50 Pset2: Vigenere
Problem:    Create a program that encrypts messages using Vigenère's cipher. Create a ciphertext
            by shifting the ascii values from a user inputted plaintext by a given word that
            is specified by the user. The word will convert each character into an ascii number
            and add that into the plaintext to create the ciphertext.
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

    string k = argv[1];
    //Error checks to make sure that the user input is an alphabetical word or character
    for (int i = 0, n = strlen(k); i < n; i++)
    {
        if (!isalpha(k[i]))
        {
            printf("Enter alphabetic characters only please \n");
            return 1;
        }
    }




    //Checks if the user inputs a valid word
    if (argc == 2)
    {
        printf("plaintext: ");
        string p = get_string();

        printf("ciphertext: ");


        //Program will keep running for the length of the string length of the plaintext
        for (int i = 0, index = 0, n = strlen(p); i < n; i++)
        {
            if (isalpha(p[i]))
            {
                if (islower(p[i]))
                {
                    printf("%c", (p[i] - 'a' + toupper(k[index]) - 'A') % 26 + 'a');
                }
                else if (isupper(p[i]))
                {
                    printf("%c", (p[i] - 'A' + toupper(k[index]) - 'A') % 26 + 'A');
                }
                index = (index + 1) % strlen(k);
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
