#include<iostream>
using namespace std;
struct Node 
{
int data; //data to be stored in the data block of teh block (current block)
struct Node *next; // next pointer pointing to the next node 
}
int main() 
{
struct Node* head = NULL; //head pointer pointing to null 
struct Node* second = NULL; // second pointer pointing to null
struct Node* third =  NULL; //third also pointing to null 

head = new Node ; // as we have already created the pointers above we just need to now assign the values
// head node allocated in the heap 
second = new Node ;
//second node allocated in the heap 
third = new Node;
//third node allocated in the heap 
head->data = 1;
head->next = second;

second->data=2;//assign tthe data to the next node
second->next=third;//link the second node with the third 
third->data=3;
third->next=NULL;
return 0;

}
