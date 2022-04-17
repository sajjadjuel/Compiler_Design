#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char *conc( char* a, char* s)
{
    int d=strlen(a);
    int b=strlen(s);
    int t=b+d;
    int k=0;
    char *c= (char *)malloc(t+1*sizeof(char));
    for (int i=0; a[i]!='\0';i++)
    {
        c[k]=a[i];
        k++;
    }
     for (int i=0; s[i]!='\0';i++)
    {
        c[k]=s[i];
        k++;
    }
    //c = a + s;
    return c;
}

int main()
{
   char a[]="I love Islam";
   char s[]="I am Muslim";
    cout<<conc(a,s)<<endl;

    ///cout<<total(a);

}

