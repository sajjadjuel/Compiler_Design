#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

string Generator(int n, int a,int b, int c, int d)
{
    char CA[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char SC[]={'%','$','@','!'};
   // freopen("out.txt","w",stdout);    //cout write in a file;
    string s="";
      srand(time(0)); //seeds
 for(int i=0; i<n;i++)
  {


     for(int i=0;i<a;i++)
     {
          s+=CA[rand()%26];
     }

    for(int i=0;i<b;i++)
    {
        s+=tolower(CA[rand()%26]);
    }
    for(int i=0;i<c;i++)
    {
        s+=to_string(rand()%10);
    }
     for(int i=0;i<d;i++)
     {
         s+=SC[rand()%4];
     }
     s+='\n';

  }
   return s;
}

int main()
{
    int n;
    cout<<"How Many String you want to generate?? ";
    cin>>n;
    cout<<endl;
string p=Generator(n,1,5,2,1);
cout<<p;
getch();
return 0;
}
