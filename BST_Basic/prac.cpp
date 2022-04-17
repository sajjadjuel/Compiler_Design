#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct BstNode
{
    string name;
    int age;
    BstNode *left;
    BstNode *left1;
    BstNode *right;
    BstNode *right1;
};
BstNode *root;



int main()
{
   /* int n;
    cout<<"How many  Data You want to Take? ";
    cin>>n;
    char a[n];
    cout<<"Enter the data : ";
    for (int i=0; i<n;i++)*/
    //BstNode* N;
    BstNode* N= new BstNode();
    N->name="Md Khalilur Rahman";
    N->age=40;
    N->left=NULL;
    N->right=NULL;

    BstNode* N1= new BstNode();
    N1->name="Md Sajjadul Islam";
    N1->age=21;
    N1->left=NULL;
    N1->right=NULL;

    BstNode* N2= new BstNode();
    N2->name="Md Jahidul Islam";
    N2->age=8;
    N2->left=NULL;
    N2->right=NULL;

    BstNode* N3= new BstNode();
    N3->name="Mst Irani Jahan";
    N3->age=12;
    N3->left=NULL;
    N3->right=NULL;

    BstNode* N4= new BstNode();
    N4->name="Mst Israt Jahan";
    N4->age=17;
    N4->left=NULL;
    N4->right=NULL;

    N->left=N1;
    N->left1=N4;
    N->right=N2;
    N->right1=N3;
    BstNode* R=N;
    cout<<N->name<<endl;
    cout<<N->age<<endl;

    while(R->left!=NULL)
    {
        R=R->left;
        cout<<R->name<<endl;
        cout<<R->age<<endl;
    }
    R=N;
       while(R->left1!=NULL)
    {
        R=R->left1;
        cout<<R->name<<endl;
        cout<<R->age<<endl;
    }
    R=N;
       while(R->right1!=NULL)
    {
        R=R->right1;
        cout<<R->name<<endl;
        cout<<R->age<<endl;
    }
    R=N;
    while(R->right!=NULL)
    {
        R=R->right;
        cout<<R->name<<endl;
        cout<<R->age<<endl;
    }
}

