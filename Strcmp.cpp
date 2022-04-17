#include<bits/stdc++.h>
using namespace std;
bool mystrcmp(char m[], char l[])
{

  if(strlen(m)==strlen(l))
    {
        for(int i=0;m[i]!='\0';i++)
    {
        if(m[i]==l[i])
        {
            cout<<"Same";
             return true;
        }
        else
        {
            cout<<"Not Same";
                return false;

        }


    }
    }
    else
    {cout<<"Not Same";
         return false;}
}
int main(){
char a[]="I love c++";
char b[20];

char c[]="I love BD";

 mystrcmp(a,c);

return 0;
}
