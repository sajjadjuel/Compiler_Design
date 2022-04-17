#include<bits/stdc++.h>
using namespace std;



char *mystrcat(char m[], char l[])
{



int s = strlen(m);
int r = strlen(l);
int t=s+r;
int n=0;

//char p[s];
char *p= (char *)malloc(t*sizeof(char));
//char *p=(char*)malloc(s*sizeof(char)+r*sizeof(char));



    for(int i=0;m[i]!='\0';i++)
        {
             p[n]=m[i];
             n++;
        }

    for(int i=0;l[i]!='\0';i++)
        {
             p[n]=l[i];
             n++;
        }
       p[t]='\0';
return p;


}



int main(){



char a[]="I love c++";
char b[20];



char c[]="I love BD.";


char *p= mystrcat(a,c);
cout<<p<<endl;


return 0;
}
