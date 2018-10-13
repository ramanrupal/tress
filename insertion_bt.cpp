#include "treeheader.h"
//insertion at bottom most lvel with right most level
void insertion(node *root,char data)
{
	if(root==NULL)
		return;
	queue<struct node *> q1;
	q1.push(root);
	struct node *temp;
	while(q1.empty()==false)
	{
		temp=q1.front();
		q1.pop();
		if(temp->right==NULL)
		{
			temp->right=new node;
			temp->right->data=data;
			break;
		}
		else
			q1.push(temp->right);
		if(temp->left==NULL)
		{
			temp->left=new node;
			temp->left->data=data;
			break;
		}
		else
			q1.push(temp->left);
	}
}

int main(int argc,char *argv[])
{
	struct node *root=new node;
	int size=argc-1;
	char a[size];
	for(int i=0;i<size;i++)
	{
		a[i]=(argv[i+1]);
		
	}
        /*for(int i=0;i<7;i++)
        cin>>a[i];*/
        construct(root,a,0);
	printLevelorder(root);
        insertion(root,'r');
        cout<<"\n";
        printLevelorder(root);
}

