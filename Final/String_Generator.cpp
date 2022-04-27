#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

string Generator(int n, int a,int b, int c, int d)
{
    char CA[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char SC[]={'#','$','@','!','*'};
   freopen("String_Generator.txt","w",stdout);    //cout write in a file;
    string s="";
      srand(time(0)); //seeds
 for(int i=0; i<n;i++)
  {


     for(int i=0;i<a;i++)
     {
          s+=CA[rand()%26];
     }

      for(int i=0;i<d;i++)
     {
         s+=SC[rand()%5];
     }

    for(int i=0;i<b;i++)
    {
        s+=tolower(CA[rand()%26]);
    }
    for(int i=0;i<c;i++)
    {
        s+=to_string(rand()%10);
    }

     s+='\n';

  }
   return s;
}

int main()
{
    int n=1;
    //cout<<"How Many String you want to generate?? ";
    //cin>>n;
    cout<<endl;
string p=Generator(1,3,2,3,4);
cout<<p;
getch();
return 0;
}

