#include <iostream>
using namespace std;

int main() {
   int runs[5] = {4, 22, 8,46,12};
   
   int sum = 0;
   
   for(int i=0; i<5; i++) 
   {
       sum = sum + runs[i];
   }
   
   cout<<"Total Runs: "<<sum;
   
    return 0;
}
