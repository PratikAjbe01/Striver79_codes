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
 Node* ReverseList(Node* root){
  if(root==NULL||root->next==NULL){
    return root;
  }
  Node* prevN=NULL;
  Node* currN=root;
  Node* nextN=NULL;
  while(currN!=NULL){
    nextN=currN->next;
    currN->next=prevN;
    prevN=currN;
    currN=nextN;
  }
return prevN;
 }
int main(){
  Node* head=new Node(1);
  head->next=new Node(2);
  head->next->next=new Node(3);
  head->next->next->next=new Node(4);
  cout<<"yeh dekh"<<endl;
 Node* newH= ReverseList(head);
 cout<<"func k baad "<< newH->data<<endl;
 int pos=1;
 while(newH!=NULL){
    cout<<"node no : "<<pos<<" : "<<newH->data<<endl;
    pos++;
    newH=newH->next;
 }
return 0;
}