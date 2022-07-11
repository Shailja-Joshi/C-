//Functions of a Linked List

#include<iostream>
using namespace std;

class node{
    public:
      int data;
      node *next;
      node(int val){    //making a constructor
          data=val;
          next=NULL;
      }
};

void InsertAtHead(node *&head, int val){     
    node *n=new node(val);  //making a single node for value to be inserted
    n->next=head;
    head=n;
}

void insertAtTail(node *&head, int val)    //arguments given are head point address and value to be stored
   {
       if (head == NULL) {
        InsertAtHead(head, val);
        return;
    }
       node *n= new node(val);
       node *temp= head;
       while(temp->next!=NULL)  //to reach the last node
       {
           temp=temp->next;
       }
       temp->next=n;  //adding new node after last node
   }
   
void display(node *head){    //not address since no changes in LL is needed
    node * temp=head;             //we could also use head ptr itself cz it's call by value & not reference
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteAtHead(node *&head){    
    node *todelete =head;
    head=head->next;
    delete todelete;
}
void deletion(node *&head, int val)
{
    if(head==NULL)    return;          //if there is not a single value in LL
    if(head->next==NULL)          //if there is only one node present
    {
        deleteAtHead(head);
    }
    node *temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
        
    }
    node *todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete;   //releasing the node that was deleted from LL
}
node * rev(node *&head){     //Iterative Method to reverse a linked list
    node* prevptr=NULL;
    node *currptr= head;
    node *nextptr;
    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;     // now prevptr is where new head should be
}

void makeCycle(node* &head, int pos){
    node *temp=head;
    node *startNode;
    
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

bool detectCycle(node *&head){
    node *slow=head;
    node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow= slow->next;    //slow ptr takes only one step
        fast=fast->next->next;    //fast ptr takes two step
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(node *&head){  //in this fctn we assume that cycle is already detected
    node *slow=head;
    node *fast=head;
    do{                               //to make slow reach at that common node
        slow=slow->next;
        fast= fast->next->next;
    }while(slow!=fast);
    fast=head;                  //fast now points at head
    while(slow->next!= fast->next){   //until they both have point of cycle start at their next
        fast=fast->next;
    }
    slow->next =NULL;        //making the node that connects the cycle as last node
}


int main()
{
    node *head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    InsertAtHead(head, 5);
    display(head);
    deletion(head, 1);
    display(head);
   // node *newhead= rev(head);
   // display(newhead);
    makeCycle(head,2);
    //display(head);            //shows an infinte looped LL
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head);
    
}
