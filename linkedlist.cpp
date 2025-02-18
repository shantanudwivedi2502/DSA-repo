
#include<iostream>
using namespace std; 
class node
{
    public:
    int data;
     node* next;

     node(int data)
     {
        this->data=data;
        this->next=NULL;
     }


};
void InsertAtPosition( node*&head,int position ,int d )
{
    if(position==1)
    {
       InsertAtHead(head,d);
        return;
    }
    node*temp=head;
    int cnt=1; 
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++; 
    }
    node*toInsert=new node(d );
    toInsert->next=temp->next;
    temp->next=toInsert;

}
void InsertAtTail(node*&tail,int d)
{
    node *temp=new node(d);
    tail->next=temp;
   // tail=tail->next ;
   tail=temp;

}
void InsertAtHead(node*&head, int d )
{
    node * temp = new node(d);
    temp->next=head ;
    head=temp;

}
void print(node*&head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main(){
   node * node1 =new node(10);
   node *head=node1;
   node *tail=node1;
   InsertAtHead(head,9);
   InsertAtTail(tail,11);
   InsertAtPosition(head,1,3);
   
  // InsertAtTail(tail,11);
    print(head );

}

