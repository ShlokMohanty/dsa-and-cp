#include<iostream>
using namespace std;
void printList(Node *node)
{
while(node!=NULL){
cout<<data<<" ";
node = node->next;
}
}
int main()
{
 struct Node* head = NULL; 
    struct Node* second = NULL; 
    struct Node* third = NULL; 
        
    // allocate 3 nodes in the heap 
    head = new Node; 
    second = new Node; 
    third = new Node;
        
    head->data = 1; //assign data in first node 
    head->next = second;
    // Link first node with the second node
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    printList(head);
    return 0; 
}
