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
//find middle element in linked list
int middle(node *head)
{
    if(head==NULL)return -1;
    if(head->link==NULL)return head->data;
    else
    {
        temp=head;
       node* t=head;
        while(temp!=NULL&&temp->link!=NULL)
        {
            temp=temp->link->link;
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
   //middle element in list
   int val=middle(head);
   cout<<"middle element"<<val<<endl;
   
    return 0;
}