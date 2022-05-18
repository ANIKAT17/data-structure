#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void add(Node** head_ref, int new_data)
{
   Node* new_node = new Node(); // alocate the new node;
   new_node->data=new_data;      // adding data in new node;
   new_node->next=(*head_ref);    
   (*head_ref)=new_node;
}
int main()
{
  Node* head = NULL;
  add(&head,23);
  add(&head,34);
  add(&head,29);
  print(head);
}