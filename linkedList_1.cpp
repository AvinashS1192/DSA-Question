#include<bits/stdc++.h>
using namespace std;

class linkedList{
public:
    int data;
    linkedList* next;
    
    linkedList(int data){
        this->data=data;
        this->next=NULL;
    }
    ~linkedList(){
        cout<<" destructor called "<<endl;
    }
};
//deletion at head
void deletionHead(linkedList* & head){
    linkedList* temp= head;
    head=head->next;
    delete temp;
}
//deletion at tail
void deletionTail(linkedList* &head, linkedList* & tail){
    linkedList* temp= head;
    linkedList * prev= head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    tail=prev;
    prev->next=NULL;
    delete(temp);

}
// deletion at specific position
void deletionMiddle(linkedList* &head,linkedList* &tail,int position){
    //if position is head
    if(position==1){
        deletionHead(head);
        return;
    }
    int cnt=1;
    linkedList* temp=head;
    linkedList* prev= head;
    while(cnt<position){
        prev=temp;
        temp= temp->next;
        cnt++;
    }
    // if the postion is last 
   if(temp->next==NULL){
    tail=prev;
    prev->next=NULL;
    delete(temp);
    return;
    }
    //at specific position;
    prev->next=temp->next;
    delete temp;

}
//insertion at head
void insertHead( linkedList* &head,int data){
    linkedList * temp=new linkedList(data);
    temp->next=head;
    head=temp;
}
//insertion at tail;
void insertTail(linkedList* &tail, int data){
    linkedList* temp= new linkedList(data);
    tail->next=temp;
    tail=temp;

}
//insertion at specific position
void insertMiddle(linkedList* &head,linkedList* &tail,int position, int data){
   // insertion at head
   if(position==1){
    insertHead(head,data);
    return;
   }
    linkedList* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertTail(tail,data);
        return;
    }
    linkedList* temp1= new linkedList(data);
    temp1->next=temp->next;
    temp->next=temp1;
}


void print (linkedList* &head){
    linkedList* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
 linkedList * node1= new linkedList(10);
//  node1->data=10;
//  node1-> next= NULL;
 linkedList* head= node1;
 linkedList* tail= node1;
 insertHead(head,12);
 insertHead(head,14);
 insertHead(head,126);
 insertTail(tail,8);
 insertTail(tail,6);
 insertTail(tail,4);
 insertMiddle(head,tail,4,2);
 insertMiddle(head,tail,2,5);
 insertMiddle(head,tail,1,1);
 print(head);
 deletionHead(head);
 print(head);
 deletionTail(head,tail);
 print(head);
 deletionMiddle(head, tail, 4);
 print(head);


    return 0;
}