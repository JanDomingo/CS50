/*
Progammer: Jan Domingo
Date: December 22, 2017
Assignment: CS50 Pset1: Water
Problem: Implement a program that reports a user’s water usage, converting minutes spent in the shower to bottles of drinking water.
*/

#include<cs50.h>
#include<stdio.h>

int main(void)
{
    printf("Minutes: ");

    int Minutes = get_int();
    int Bottles = Minutes * 12;

    printf("Bottles: %i\n", Bottles);


}
