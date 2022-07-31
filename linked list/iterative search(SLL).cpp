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
//search iterative
void search(node *head,int val)
{
    while(head!=NULL)
    {
        if(head->data==val)
        {
            cout<<"element found"<<endl;
            return;
        }
        head=head->link;
    }
    cout<<"element not found"<<endl;
    return ;
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
   cout<<"enter element to search"<<endl;
   int val;
   cin>>val;
   search(head,val);
    return 0;
}