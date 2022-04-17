#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double *linespace(double l, double u, int n)
{
   double *a=new double (n+1);
   double h=(u-l)/n;
   a[0]=l;
   for (int i=1; i<=n;i++)
   {
       a[i]=a[i-1]+h;
   }

   return a;
}
double f(double x)
{
    return 1/(1+exp(-x)); //sigmoid Function
}
int main()
{
    double *a=linespace(0,1,5);
    for (int i=0; i<=5;i++)
   {
       cout<<a[i]<<" "<<f(a[i])<<endl;
   }

    //cout<<p;
    return 0;
}


