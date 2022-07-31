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

// insert in sorted list
node *sortedins(node *head,int val)
{
  bool flag=true;
  //check list is sorted or not
  temp=head;
  while(temp->link!=NULL)
  {
     if(temp->data>temp->link->data)flag=false;
     temp=temp->link;
  }
  if(flag==false)return head;
  else{
      node *prev=NULL;
      temp=head;
      while(temp!=NULL&&temp->data<val)
      {
          prev=temp;
          temp=temp->link;
      }
      node *n=new node();
      n->link=NULL;
      n->data=val;
      if(prev==NULL)
      {
          n->link=head;
          head=n;
      }
      else{
          n->link=temp;
          prev->link=n;
      }
      
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
   int val;
   cout<<"enter the value to insert in sorted array";
   cin>>val;
   head=sortedins(head,val);
   print(head);
    return 0;
}