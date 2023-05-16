#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
};
int main()
{
    Node *p = new Node();
    p->data = 2;
    Node *q = new Node();
    q->data = 4;
    Node *r = new Node();
    r->data = 6;
    Node *s = new Node();
    s->data = 8;
    Node *t = new Node();
    t->data = 10;
    
    p->next = q;
    q->next = r;
    r->next = s;
    s->next = t;
    t->next = NULL;
    
    int count = 0 ;
    Node *ptr = p;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    cout<<"Length of Linkedlist : "<<count<<endl;
    
    return 0;
}
