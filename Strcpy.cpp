#include<bits/stdc++.h>
using namespace std;



char *mystrcpy(char m[]){



int s= strlen(m);



char *l=(char*)malloc(s*sizeof(char));



for(int i=0;m[i]!='\0';i++){
l[i]=m[i];
}
return l;



}



int main(){



char a[]="I love c++";
char b[20];



string c="I love BD.";



char *p=mystrcpy(a);
cout<<p<<endl;



return 0;
}
