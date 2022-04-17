#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int specific( char* a, char s)
{
    int c=0;
    for(int i=0; a[i]!='\0'; i++)
    {
       if (a[i]==s)
            c++;

    }
    return c;
}
int total(char* a)
{
    int c=0;
    for(int i=0; a[i]!='\0'; i++)
    {
       if (a[i]!=' ')
            c++;

    }
    return c;
}
int main()
{
   char a[]="I love Islam";
   char s='I';
   cout<<"Number of Chosen Letter ("<<s<<") : ";
    cout<<specific(a,s)<<endl;
    cout<<"\nTotal Number of Letter : ";
    cout<<total(a);
    getch();

}
