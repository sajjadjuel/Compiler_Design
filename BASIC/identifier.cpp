#include<bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int flag;
int validIden( char *string)
{
    int count = 0;
    if ((string[0] >= 'a' && string[0] <= 'z') ||
        (string[0] >= 'A' && string[0] <= 'Z') //cap letter
        ||
        (string[0] == '_') //underscore
    )
    {
        for (int i = 1; i <= strlen(string); i++)
        {
            if ((string[i] >= 'a' && string[i] <= 'z') ||
                (string[i] >= 'A' && string[i] <= 'Z') ||
                (string[i] >= '0' && string[i] <= '9') ||
                (string[i] == '-'))
            {
                count++;
            }
        }
          if (count == strlen(string))
        {
            flag = 0;
        }
    }
    else
    {
        flag = 1;
    }
    return flag;
}

int main()
{
    char str[25];
    printf("Enter any string: ");
    gets(str);
      validIden(str);
    if (flag == 1)
        printf("It is not valid identifier");
    else
        printf("It is valid identifier");
    return 0;
}
