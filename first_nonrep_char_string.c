#include <stdio.h>

#define MAX_SIZE 256

int *getcharcount(char *str){
    
    int *count = (int*)calloc(MAX_SIZE, sizeof(int)); 
    int i = 0;    
    
    while(*(str+i) != '\0'){
        count[*(str+i)]++;
        i++;
    }
    return count;
    
}

int nonrepchar(char *string){
    
 int *count = getcharcount(string);  
 int i,index = -1;
 i = 0;
 while( *(string + i) != '\0' ){
     
     if (count[*(string + i)] == 1){
        index = i;
        break;
    }
     i++;
 }
 printf("Verified  Value at location is %d",i);
 
 return index;
    
}




int main()
{   
    
    char str[] = "geeksforgeeks";
    int index = -1;
    
    index = nonrepchar(&str[0]);
    
    if(index == -1){
        printf("No non repeating character found");
    }
    else{
        printf("First non repeating character is %c",str[index]);
    }
        
    //printf("Hello, World!\n");

    return 0;
}
