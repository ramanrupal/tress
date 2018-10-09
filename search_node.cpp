#include "treeheader.h"
bool search(struct node *root,char data)
{
	if(root==NULL)
		return false;
	queue<struct node *> q2;
	q2.push(root);
	node *temp;
	while(q2.empty()==false)
	{
		temp=q2.front();
		q2.pop();
		if(temp->data==data)
			return true;
		if(temp->left!=NULL)
			q2.push(temp->left);
		if(temp->right!=NULL)
			q2.push(temp->right);
	}
	return false;
}
int main(int argc,char *argv[])
{
	struct node *root=new node;
	int size=argc-1;
	char a[size];
	int k=0;
	/*for(int i=1;i<=size;i++)
	{
		a[k]=*(a[i]);
		k++;
	}*/
        for(int i=0;i<7;i++)
        cin>>a[i];
        construct(root,a,0);
	printLevelorder(root);
        if(search(root,'d')==true)
         cout<<"founded";
        else cout<<"not founded";
}
		

