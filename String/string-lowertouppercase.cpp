#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string in lowercase :- ";
    cin>>str;
    
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='A' && str[i]<='z')
        str[i] = str[i] - 32;
    }
    cout<<"Your String in uppercase :-"<<str;
    return 0;
}
