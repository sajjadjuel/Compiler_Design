#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct BstNode
{

    string name;
    int sl;
    int data;
   double cg;
   BstNode *left;
   BstNode *right;

};
BstNode *root;


BstNode* GetNewNode(int data, string name, int sl, double cg)
{
	BstNode* NewNode = new BstNode();
	NewNode->sl = sl;
	NewNode->name = name;
	NewNode->data = data;
	NewNode->cg = cg;
	NewNode->left = NULL;
	NewNode->right = NULL;
	return NewNode;
}

void PreOrder(BstNode* root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->sl << " ";
	cout << root->name << " ";
	cout << root->data << " ";
	cout << root->cg << " ";

	PreOrder(root->left);
	PreOrder(root->right);
}
void InOrder(BstNode* root)
{


if (root == NULL)
	{
		return;
	}
	InOrder(root->left);
	cout << root->sl << " ";
	cout << root->name << " ";
	cout << root->data << " ";
	cout << root->cg << " ";

	InOrder(root->right);

}

BstNode* Insert(BstNode* root, int data, string name, int sl, double cg)
{
	if (root == NULL)
	{
		root = GetNewNode(data,name,sl,cg);
	}
	else if (data <= root->data)
	{
		root->left = Insert(root->left, data,name,sl,cg);
	}
	else
	{
		root->right = Insert(root->right,  data,name,sl,cg);
	}
	return root;
}

int main()
{
      root = NULL;
    int sl, cr;
   double cg;
   string name;
   freopen("in.txt","r",stdin);
//string s = readFile("in.txt");
//cout<<s<<endl;

for(int i=0; i<4;i++)
{
    cin>>sl;
    cin>>name;
    cin>>cr;
    cin>>cg;
    cout<<sl<<" "<<name<<" "<<cr<<" "<<cg<<endl;
    root = Insert(root,  cr,name,sl,cg);
}
cout<<"\n\n InOrder Traversal   : ";
	InOrder(root);

}


