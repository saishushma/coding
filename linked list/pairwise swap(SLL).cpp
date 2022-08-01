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
//pairwise swap
node* pairswap(node *head)
{  
    node *h=NULL;
    if(head==NULL)return head;
    else if(head->link==NULL)return head;
    else{
    node *t1=head,*t2=head->link,*t3;
    while(t1&&t1->link)
    {
        
        t3=t2->link;
        if(h==NULL)
        {
            h=t2;
        }
        t2->link=t1;
        if(t3==NULL||t3->link==NULL){
        t1->link=t3;break;}
        else
        {
        t1->link=t3->link;
        }
        
        t1=t3;
        t2=t1->link;
    }
    return h;
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
    //pair wise swap
    head=pairswap(head);
    cout<<endl;
    print(head);
    
    return 0;
}
