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

int calLen(Node* head){
       Node* curr=head;
       int cnt=0;
       while(curr!=NULL){
           cnt++;
           curr=curr->next;
       }
       return cnt;
   }
    Node* intersectPoint(Node* head1, Node* head2) {
      Node* fast=head1;
     Node* slow=head2;
     while(slow!=fast){
         slow=slow->next;
         fast=fast->next;
         if(slow==NULL){
             slow=head2;
         }
         if(fast==NULL){
             fast=head1;
         }
     }
     return slow;
}
int main(){
     Node* common = new Node(8);
    common->next = new Node(10);

    // List 1: 3 -> 6 -> 9 -> 8 -> 10
    Node* head1 = new Node(3);
    head1->next = new Node(6);
    head1->next->next = new Node(9);
    head1->next->next->next = common;

    // List 2: 4 -> 8 -> 10
    Node* head2 = new Node(4);
    head2->next = common;

    Node* intersection =intersectPoint(head1, head2);

    if (intersection != NULL)
        cout << "Intersection at node with value: " << intersection->data << endl;
    else
        cout << "No intersection." << endl;

    return 0;
   
}