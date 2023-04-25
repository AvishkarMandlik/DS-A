#include <iostream>
#include<string>
using namespace std;

int main() {

    string name;

    cout<<"Enter your name:";
    cin>>name;
	string orignalname = name;
    
    int start = 0;
    int end =7;
    while(start<end){
    	int temp = name[start];
    	name[start]=name[end];
    	name[end]=temp;
    	
    	start ++;
    	end--;
    }
    cout<<"After reversing your name :-"<<name<<endl;
    cout<<"your orignal name :-"<<orignalname<<endl;
    

    return 0;
}
