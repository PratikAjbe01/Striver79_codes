#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data){
     this->data=data;
     this->next=NULL;
    }
};
 Node* MiddleOfList(Node* root){
  if(root==NULL||root->next==NULL){
    return root;
  }
  Node* slow=root;
  Node* fast=root;
  while(fast!=NULL&&fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
  }
return slow;
 }
int main(){
  Node* head=new Node(1);
  head->next=new Node(2);
  head->next->next=new Node(3);
  head->next->next->next=new Node(4);
  head->next->next->next->next=new Node(5);
  head->next->next->next->next->next=new Node(6);
  head->next->next->next->next->next->next=new Node(7);
  cout<<"yeh dekh"<<endl;
 Node* newH= MiddleOfList(head);
 cout<<"y le mid point/middle node "<< newH->data<<endl;
 int pos=1;
 while(head!=NULL){
    cout<<"node no : "<<pos<<" : "<<head->data<<endl;
    pos++;
    head=head->next;
 }
return 0;
}