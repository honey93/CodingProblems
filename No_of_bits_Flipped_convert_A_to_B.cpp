#include <iostream>

using namespace std;

int countSetBits(int x, int y){
   
   int count = 0;
   
   while (x > 0 || y > 0 ){ 
       if((x&1)^(y&1)){
        count++;   
       }
        x = x >> 1;
        y = y >> 1;
   }
   
   return count;
   
}
    


int main() {
   int x = 10;
   int y = 20;
  
   cout << "No of bits to be flipped are " <<countSetBits(x,y);
   return 0;
   
}
