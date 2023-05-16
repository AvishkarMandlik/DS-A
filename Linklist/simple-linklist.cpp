#include<iostream>

using namespace std;

class Node
{
	public:
		int data;
		Node *next;
};
int main()
{
    Node *a = new Node();
    a->data = 5;
    
    Node *b = new Node();
    b->data = 10;
    
    Node *c = new Node();
    c->data = 15;
    
    Node *d = new Node();
    d->data = 20;
    
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;
    
    Node *head = a;
    while(head != NULL)
    {
        cout<<head->data<<", "<<endl;
        head = head->next;
    }
    
    return 0;
}

