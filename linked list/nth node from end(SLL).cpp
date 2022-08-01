#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
}*head=NULL,*temp=NULL;
//print linked list
void print(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->link;
        
    }
}
//nth node from end
int nthnode(node *head,int n)
{
    if(head==NULL)return -1;
    temp=head;
    node *t=head;
    int i;
    for(i=0;i<n&&temp!=NULL;i++)
    {
        temp=temp->link;
    }
    if(i<n)return -1;
    else
    {
        while(temp!=NULL)
        {
            temp=temp->link;
            t=t->link;
        }
        return t->data;
    }
}

int main()
{
    int n;
    cout<<"enter no of nodes in the linked list";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        node *n1=new node();
        n1->link=NULL;
        cin>>n1->data;
        if(head==NULL)
        {
            head=n1;
            temp=n1;
        }
        else
        {
            temp->link=n1;
            temp=temp->link;
        }
    }
   print(head); 
   //nth element from end
   cout<<"enter the element from last"<<endl;
   int pos;
   cin>>pos;
   int val=nthnode(head,pos);
   cout<<"nth node from end"<<val<<endl;
   
    return 0;
}