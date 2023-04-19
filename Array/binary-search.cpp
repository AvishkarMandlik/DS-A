#include <iostream>

using namespace std;

int main(){
int arr[10] = {2,3,5,12,30,65,45,34,23,13};

for(int i=0; i<9; i++){
cout<<arr[i]<<endl;
}

int key;
cout<<"Search your number :";
cin>>key;

int start = 0;
int end = 9;
int flag = -1;

while(start<=end){

int mid = (start + end) / 2;
if(key==arr[mid])
{
flag = mid;
cout<<"Element found at position : "<<mid<<endl;
break;
}
else if(key>arr[mid])
{
start = mid+1;
}
else{

end=mid-1;
}

}
if(flag ==-1)
{
cout<<"Element not found in given array";
}
return 0;
};
