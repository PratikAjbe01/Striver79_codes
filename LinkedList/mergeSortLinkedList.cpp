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
Node* merge(Node* l1, Node* l2){
        if(!l1) return l2;
        if(!l2) return l1;
        
        Node* p = l1;
        Node* q = l2;
        Node* h = NULL;
        Node* t = NULL;
        while(p != NULL && q != NULL){
            if(p->data <= q->data){
                Node* dummy = new Node(p->data);
                if(h == NULL){
                    h = dummy;
                    t = dummy;
                }else{
                    t->next = dummy;
                    t = t->next;
                }
                p = p->next;
            }else{
                Node* dummy = new Node(q->data);
                 if(h == NULL){
                    h = dummy;
                    t = dummy;
                }else{
                    t->next = dummy;
                    t = t->next;
                }
                q = q->next;
            }
        }
        if(p!= NULL){
            t->next = p;
        }
        if(q != NULL){
            t->next = q;
        }
        return h;
    }
    
    
    Node* mergeSort(Node* head) {
        // your code here
        if(head == NULL || head->next == NULL) return head;
           
        Node* slow = head;
        Node* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* mid = slow->next;
        slow->next = NULL;
        Node* left = mergeSort(head);
        Node* right = mergeSort(mid);
        Node* ans = merge(left,right);
        return ans;
    }
    int main(){
        // implement apne mann se karle thoda toh khud se kar C*** sab mera hi teepega kya
        return 0;
    }