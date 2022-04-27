#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;

};
BstNode* root;

BstNode* GetNewNode(int data)
{
	BstNode* NewNode = new BstNode();
	NewNode->data = data;
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
	cout << root->data << " ";
	PreOrder(root->left);
	PreOrder(root->right);
}
void PostOrder(BstNode* root)
{

	if (root == NULL)
	{
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);

	cout << root->data << " ";
}
void InOrder(BstNode* root)
{


if (root == NULL)
	{
		return;
	}
	InOrder(root->left);
	cout << root->data << " ";

	InOrder(root->right);

}


BstNode* Insert(BstNode* root, int data)
{
	if (root == NULL)
	{
		root = GetNewNode(data);
	}
	else if (data <= root->data)
	{
		root->left = Insert(root->left, data);
	}
	else
	{
		root->right = Insert(root->right, data);
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
    root = Insert(root, cr);
}
//"The Tree will make By 3rd index or depending on cr value"

cout<<"\n\n PreOrder Traversal  : ";
	PreOrder(root);
cout<<"\n\n InOrder Traversal   : ";
	InOrder(root);
cout<<"\n\n PostOrder Traversal : ";
	PostOrder(root);
	getch();
}


