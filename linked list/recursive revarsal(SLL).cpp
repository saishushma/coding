#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
}*head=NULL,*temp=NULL;
//print
void print(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->link;
    }
}
node *reverse(node *curr,node *prev)
{
 if(curr==NULL)return prev;
 else
 {
     node *next=curr->link;
     curr->link=prev;
     //prev=curr;
     //curr=next;
     reverse(next,curr);
 }
 
}
int main()
{
    int n;
    cout<<"enter the elements in the linked list";
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
    cout<<endl;
    head=reverse(head,NULL);
    print(head);
    
    return 0;
}