// Example program
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
  
  
  int a[] = {1, 2, 3, 2, 3, 1, 3,3,4},i;
  int length = sizeof(a)/sizeof(a[0]);
  
  map <int,int> oddmap;
  
  for(i=0;i<length;i++){
    oddmap[a[i]]++;    
  }
  
  for(auto it = oddmap.begin(); it != oddmap.end();  it++){
    
    if((it->second)%2 != 0 ){
         cout << "Odd occurence" << it->first;
        break;
    }    
  
  }
  
  return 0;
}
