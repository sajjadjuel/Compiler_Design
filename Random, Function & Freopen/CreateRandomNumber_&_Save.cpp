#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("100k.txt","w",stdout);
    srand(time(0)); //seeds
    for(int i=0;i<100000;i++)
    {
        cout<<rand()%4+((rand()%10)/10.0)<<endl;
    }
    return 0;
}
