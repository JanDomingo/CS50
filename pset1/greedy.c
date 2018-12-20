/*
Progammer: Jan Domingo
Date: December 23, 2017
Assignment: CS50 Pset1: Greedy
Problem: Implement a program that calculates the minimum number of coins required to give a user change.

*/

#include <cs50.h>
#include <stdio.h>

int main (void)
    {
        float change;
        int num = 1;

        //If the user inputs a negative value, the program will ask for a user input again
        do {
        printf("How much change is owed? (Enter a float value) $ ");
        change = get_float();
        //printf("%.55f\n",change);

        }
        while (change < 0);

        //changei stands for change in integer. This converts the user input from dollars to cents only
        int changei = change * 100 + 0.005; //.005 compensates for the decimal imprecision
       // printf("%i\n",changei);

        while (changei > 25)
        {
            changei -= 25;
            num++;
        }

        while (changei > 10 && changei < 25)
        {
            changei -= 10;
            num++;
        }

         while (changei > 5 && changei < 10)
        {
            changei -= 5;
            num++;
        }

         while (changei > 1 && changei <5)
        {
            changei -= 10;
            num++;
        }

        printf("%i\n",num);

    }
