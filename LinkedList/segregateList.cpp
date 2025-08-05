#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
 Node* divide(Node* head) {
     Node* even=new Node(-1);
     Node* odd= new Node(-1);
    Node* evenS=even;
    Node* oddS=odd;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data%2==0){
        even->next=temp;
        even=even->next;
        }else{
        odd->next=temp;
        odd=odd->next;
        }
        temp=temp->next;
    }
    odd->next=NULL;
    even->next=oddS->next;
    return evenS->next;    
    }
int main(){
    Node* head=new Node(17);
    head->next=new Node(15);
     head->next->next=new Node(8);
      head->next->next->next=new Node(9);
       head->next->next->next->next=new Node(2);
        head->next->next->next->next->next=new Node(4);
         head->next->next->next->next->next->next=new Node(6);
   Node* newN= divide(head);
   while(newN!=NULL){
    cout<<"this is newN : "<<newN->data<<endl;
    newN=newN->next;
   }

    return 0;
}