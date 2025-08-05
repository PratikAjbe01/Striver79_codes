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
 int RemovekthNodefromlast(Node* head,int k){
    cout<<"func toh chal raha hai"<<endl;
    Node* slow=head;
    Node* fast=head;
    while(k>0){
         if(fast==NULL){
            cout<<"dekh mera ans agar k bada hai : "<<-1<<endl;
            return -1;}
        fast=fast->next;
        k--;
    }
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
           cout<<"dekh mera ans : "<<slow->data;
    return slow->data;
 }
int main(){
  Node* head=new Node(1);
  head->next=new Node(2);
  head->next->next=new Node(3);
  head->next->next->next=new Node(4);
  head->next->next->next->next=new Node(5);
  head->next->next->next->next->next=new Node(6);
  head->next->next->next->next->next->next=new Node(7);
  RemovekthNodefromlast(head,8);
  cout<<"yeh dekh"<<endl;
//  int pos=1;
//  while(head!=NULL){
//     cout<<"node no : "<<pos<<" : "<<head->data<<endl;
//     pos++;
//     head=head->next;
//  }
return 0;
}