#include<iostream>
#include "treeheader.h"
#include<stdlib.h>
using namespace std;
void construct(struct node *temp,char arr[],int i)
{
	temp->data=arr[i];
	if(arr[i]=='-')
		return;
	if(2*i+1>strlen(arr))
		return;
	node *left=new node;
	construct(left,arr,2*i+1);
	if(2*i+2>strlen(arr))
		return;
	node *right=new node;
	construct(right,arr,2*i+2);
	if(left->data=='-')
	{
		left=NULL;
		free(left);
	}
	if(right->data=='-')
	{
		right=NULL;
		free(right);
	}
	temp->left=left;
	temp->right=right;
}
int main(int argc,char *argv[])
{
	 struct node *root=new node;
         int size=argc-1;
	 char a[size];
	 int k=0;
	 /*for(int i=1;i<=size;i++)
	 {
		 a[k]=atoi(argv[i]);
		 k++;
	 }*/
         for(int i=0;i<7;i++)
{
cin>>a[i];
}
	 insert_node(root,a,0);
         printLevelorder(root);
         printPostorder(root);
}



