#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;
}*head=NULL,*temp=NULL;

//print function

void printll(node *n)
{
    if(n==NULL)return;
    else{
        cout<<n->data<<" ";
        n=n->link;
        printll(n);
    }
}

//print reversal
void printrll(node *n)
{
    if(n==NULL)return ;
    else
    {
        printrll(n->link);
        cout<<n->data<<" ";
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
    //printing the liked list recursively
    printll(head);
    cout<<endl;
    //printing reverse linked list recursively
    
    printrll(head);
    
    
    return 0;
}