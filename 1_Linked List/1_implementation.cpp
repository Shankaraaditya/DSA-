#include <iostream>
// #include <bits/stdc++.h>

using namespace std;


class Node{

    public:
    int data;
    Node* next;

    // constructor-->
    // isse ham node ka naam aur bracket me uska data likh ke
    // ek naya node bana sakte hai.
    // example - Node1(10);
    Node(int data){
        this -> data = data;   
        this -> next = NULL;   
    }

};


    void insertAtHead(Node* &head , int d){

        Node* temp = new Node(d);
        temp -> next = head;
        head = temp; 
    };
 
    void insertAtTail(Node * &tail,int d){
        Node * temp = new Node(d);

        tail->next = temp;
        tail = tail -> next ;
  
    }

    void traverse(Node* &head){
        
        Node* temp = head;
        while (temp!= NULL)
        {
            cout<<temp -> data;
            cout<<" ";
            temp = temp -> next;
            
        }

        cout<<endl;
        
    };


int main(){ 

    Node* node1 = new Node(10);
    Node* head = node1;// isse head hamesa node1 pe rhega traverse krne me kaam aayega

    cout<<node1->data<<endl;    // 10
    cout<<node1->next<<endl;    // 0

    // insertAtHead(node1,12);
    
    // Node *head = node1; --> dont need this ..head is already at node1
    // ham log head ko pahle he node1 kar de rhe insert wale function me he.
   
    // traverse(node1);  // 12 10

    // insertAtHead(node1,33);

    // traverse(node1); // 33 12 10

    insertAtTail(node1, 44);
    traverse(head);

    // insertAtHead me hamko head ko hila ke naye wale node par karna hai &
    // insertAtTail me hamko tail ko hila ke naye wale node par karna hai...//



    return 0;
}