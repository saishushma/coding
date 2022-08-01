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
//remove duplicates
node *rmduplicates(node *head)
{
    if(head==NULL)return head;
    if(head->link==NULL)return head;
    else
    {
        node *curr=head,*next;
        while(curr!=NULL)
        {   next=curr->link;
            if(next &&  next->data==curr->data)
            {
                curr->link=next->link;
                //curr=curr->link;
            }
            else
            curr=curr->link;
        }
        return head;
    }
}

int main()
{
int n;
cout<<"enter no of elements in the linked list ::";
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
//remove duplicates
head=rmduplicates(head);
cout<<endl;
print(head);
return 0;
}