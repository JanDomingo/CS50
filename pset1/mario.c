/*
Progammer: Jan Domingo
Date: December 23, 2017
Assignment: CS50 Pset1: Mario
Problem: Implement a program that prints out a half-pyramid of a specified height
*/

#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int height = 0;
    int width = height+1;

    //This loops will keep asking for user input if below 0 and above 23
    do
    {
       printf("Enter the height of the pyramid between 0 and 23: ");
       height = get_int();

    }
    while (height < 0 || height > 23);


    //This loop below will print out the spaces that are necessary to create the half trianlge
    {
        for (int i=0; i<height; i++)
        {
            for (int j=height-i; j>1; j--)
            {
                printf(" ");


        }

    //This loop below will print out the hashes to create the triangle
            for (int k=0; k<width+1; k++)
            {
                printf("#");
            }
                printf("\n");
                 width++;
        }
    }
}