#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

void Terminal(string a)
{
    int p = a.length();
    char nt[10];
    char Ter[10];
    int w=0;
    //cout<<"Terminals Are: ";
      for (int i=0;i<='\n';i++)
      {
           if(a[i]>= 'a' && a[i]<='z')
          {
              cout<<a[i]<<" ";
          }
          //cout<<endl;
      }
}
void Non_Terminal(string a)
{
    int p = a.length();
    string nt;
    int s=0;
    char Ter[s];
    int w=0;
    //cout<<"Non Terminals Are :";

      for (int r=0;r<='\n';r++)
      {
          /*if (a[r]=='-' && a[r+1]=='>')
          {
               //nt[w++] = a[i-1];
              cout<<a[r-1]<<" ";
          }
    else*/ if(a[r]>= 'A' && a[r]<='Z')
          {
             Ter[w++]=a[r];
             s++;
          }
      }
      for(int q=0;q<s;q++)
        cout<<Ter[q]<<" ";
}

void T_readFile(string F)
{
    ifstream infile;
    infile.open(F);

  string line;
  string allline;
    while(getline(infile,line))
    {
        allline=line+"\n";
        Terminal(allline);
       //Non_Terminal(allline);
    }
infile.close();
//return allline;
}

void N_readFile(string F)
{
    ifstream infile;
    infile.open(F);

  string line;
  string allline;
    while(getline(infile,line))
    {
        allline=line+"\n";
       // Terminal(allline);
       Non_Terminal(allline);
    }
infile.close();
//return allline;
}

int main()
{
    cout<<"Terminals Are : ";
    T_readFile("production.txt");
    cout<<"\n\nNon Terminals Are : ";
    N_readFile("production.txt");
    getch();
    return 0;
}




