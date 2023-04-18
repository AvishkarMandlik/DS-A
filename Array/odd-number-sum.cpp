
#include <iostream>
using namespace std;
  
int main() {

int num[] = {1,3,4,5,23,2,4,13,9,7};
int ans=0;
for(int i=0; i<=10; i++){
if(num[i]%2==1){
ans = ans +num[i];
}
}
        cout<<"Sum of odd numbers in array :- "<<ans<<endl;
    return 0;
}

