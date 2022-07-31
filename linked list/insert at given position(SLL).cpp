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
//inster at given position
node *insertpos(node *head,int pos,int val)
{
    node *n=new node();
    n->link=NULL;
    n->data=val;
    if(pos==1)
    {
       n->link=head;
       head=n;
    }
    else
    {
        temp=head;
        node *prev=NULL;
        for(int i=1;i<pos&&temp!=NULL;i++)
        {   prev=temp;
            temp=temp->link;
        }
        
        prev->link=n;
        n->link=temp;
    }
    return head;
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
   int pos,val;
   cout<<"enter the value to insert"<<endl;
   cin>>val;
   cout<<"enter the position in the linked list to insert"<<endl;
   cin>>pos;
   head=insertpos(head,pos,val);
   print(head);
   
  
    
    return 0;
}