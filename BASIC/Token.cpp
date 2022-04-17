#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
void substring(char[], char[], int, int);
int Token(char *str)
{
    char token[50];
     int idx, i = 0;
     for (idx = 0; str[idx] != '\0'; idx++)
    {
        // Tokenizing at space and semicolon.
        if (str[idx] == ' ' || str[idx] == ';')
        {
            substring(str, token, i, idx);
            printf("%s \n", token);
            i = idx + 1;
        }
    }
}
int main()
{
    char str[500];



    printf("Enter a string: ");
    scanf("%[^\n]%*c", str); // string input with spaces.
    Token(str);


}

void substring(char string[], char sub[], int start, int end)
{
    int idx = 0;

    while (start < end)
    {
        sub[idx] = string[start];
        idx++;
        start++;
    }
    sub[idx] = '\0';
}
