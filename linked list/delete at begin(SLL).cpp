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
//delete begin

node *deleteb(node *head)
{
    if(head!=NULL)
    {
    temp=head;
    head=head->link;
    delete(temp);
        
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
   //delete at begin
   head=deleteb(head);
   cout<<endl<<"after deletion\n";
   print(head);
   
    
    return 0;
}