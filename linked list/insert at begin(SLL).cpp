#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
}*head=NULL,*temp=NULL;

void print(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->link;
        
    }
}
//insert begin
node *insertb(node *head,int x)
{
  node *n2=new node();
   n2->link=head;
   n2->data=x;
   head=n2;
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
   //insert at begin
   cout<<"enter element to insert at begin";
   int x;
   cin>>x;
   head=insertb(head,x);
   print(head);
   
    
    return 0;
}