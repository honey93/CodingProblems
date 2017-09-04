#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map <char,int> mymap;

 map <char, int> :: iterator itr;
  char c;
  
  char str[] = "helloworld";
  
  int i=0;
  
  while(str[i]!='\0'){
      mymap[str[i]]++;
      i++;
  }
 
 
  
  
  for( auto it= mymap.begin(); it != mymap.end(); it++ ){
      cout << it->first;
      
      if(it->first == 'h'){
          it->second = 899;
      }
      
  }
  
  //std::cout <<"wow"<< mymap.find('l')->second;
 
 mymap.find('o')->second = 123123;
 // mymap.erase('o');
  for(itr=mymap.begin(); itr!=mymap.end();itr++){
      
    if(itr->first == 'l'){
        itr->second = 23432;
    }
    
     std::cout << itr->first;
     std::cout << itr->second;
     std::cout<<"\n";
      
  }
  
  
  
  return 0;
}
