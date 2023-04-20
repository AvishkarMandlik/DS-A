#include<iostream>

using namespace std;

int main()
{
    int arr[50];
    int size;
    
    cout<<"How many elements do you want to store? :";
    cin>>size;
    
    for(int i=0; i<size; i++)
    {
        cout<<"Enter Value for index "<<i<<" :";
        cin>>arr[i];
    }
    
    cout<<"Before Remove Array elements are :";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<", ";
    }
    
    int index;
    cout<<"\n At what position you want remove element :";
    cin>>index;
    
    for(int i=index; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
    
    cout<<"After Remove Array elements are :";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<", ";
    }
    
    return 0;
}
