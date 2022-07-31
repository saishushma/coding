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
//insert end
node *inserte(node *head,int x)
{
  node *n2=new node();
  n2->link=NULL;
  n2->data=x;
  temp=head;
  while(temp->link!=NULL)temp=temp->link;
  temp->link=n2;
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
   //insert at end
   cout<<"enter element to insert at end";
   int x;
   cin>>x;
   head=inserte(head,x);
   print(head);
   
    
    return 0;
}