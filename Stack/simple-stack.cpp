#include<iostream>
using namespace std;
class Stack
{
public:
int arr[4];
int capacity;
int top;
Stack()
{
capacity = 5;
top = -1;
}
void push(int val){
if(top == capacity-1){
cout<<"Error: Stack Overflow"<<endl;
}
else{
top++;
arr[top] = val;
}}
int pop(){
if(top==-1){
cout<<"Error: Stack UnderFlow"<<endl;
return -1;
}
int topElement = arr[top];
top--;
return topElement;
}
void printStack(){
cout<<"Current Stack : -"<<endl;
for(int i=top; i>=0; i--){
cout<<arr[i]<<endl;
}
}
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.printStack();
    
    return 0;
}
