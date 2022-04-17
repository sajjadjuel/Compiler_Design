#include<iostream>
#include<bits/stdc++.h>
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
void Find(char *str)
{
      int alphabets, digits, others, i;

     alphabets = digits = others = i = 0;
      while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabets++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else
        {
            others++;
        }
        i++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);
}

int main()
{
    char str[MAX_SIZE];


    /* Input string from user */
    printf("Enter any string : ");
    gets(str);

    Find(str);



    return 0;
}

