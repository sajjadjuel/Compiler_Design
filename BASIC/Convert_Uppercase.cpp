#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char *conc(char* s)
{
    int b=strlen(s);
    int k=0;
    char c;
    for (int i=0; i<strlen(s);i++)
    {
        if(s[i]>=65 && s[i]>=92)
        {
            c=s[i]-32;
        }
        else
            c=s[i];
        cout<<c;

    }
    //c = a + s;
    return 0;
}

int main()
{
   char a[]="I love Islam";
   char s[]="I am Muslim";
    cout<<conc(s)<<endl;

    ///cout<<total(a);

}


