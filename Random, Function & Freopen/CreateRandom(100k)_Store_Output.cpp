#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("100k.txt","r",stdin);
    srand(time(0)); //seeds
    double a[100000];
    for(int i=0;i<100000;i++)
    {
       cin>>a[i];
    }
    for(int i=0;i<100000;i++)
    {
       cout<<a[i]<<endl;
    }

    return 0;
}

