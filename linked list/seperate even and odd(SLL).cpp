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
int main()
{
    int n;
    cout<<"Enter noof elements in linked list ::";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        node *n1=new node();
        n1->link=NULL;
        cin>>n1->data;
        if(head==NULL)
        {
            head=n1;
            temp=head;
        }
        else
        {
            temp->link=n1;
            temp=temp->link;
            
        }
    }
    print(head);
    //segregate even and odd in the list
    node *h1=NULL,*h2=NULL;
    node *t1=NULL,*t2=NULL;
    temp=head;
    while(temp!=NULL)
    {  //even
        if((temp->data)%2==0)
        {
            if(h1==NULL)
            {
                h1=temp;
                t1=temp;
            }
            else
            {
                t1->link=temp;
                t1=t1->link;
            }
        }
        else
        {
            if(h2==NULL)
            {
                h2=temp;
                t2=temp;
            }
            else
            {
                t2->link=temp;
                t2=t2->link;
            }
        }
        temp=temp->link;
    }
    if(t1)t1->link=NULL;
    if(t2)t2->link=NULL;
    cout<<"\n even numbers::";
    print(h1);
    cout<<endl<<"Odd numbers::";
    print(h2);
    
    return 0;
}
