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
		head= head->next;
	}
}

int main()
{
   Node* head = NULL;
   Node* one = NULL;
   Node*  two = NULL;

   head = new Node();
   one = new Node();  
   two = new Node();

   head->data=34;
   head->next=one;
   one->data=17;
   one->next = two;
   two->data= 23;
   two->next = NULL;

   print(head);
}