#include<stdio.h>
#include <stdlib.h>

void sum_small(int *ar,int i,int j){
    int sum,first = i,second = j, min;
    
    min = abs(*(ar+i) + *(ar+j));
    
    
    while(i<j){
        
        sum = *(ar+i) + *(ar+j);
        
        printf("new sum is %d",sum);
        
        if(abs(sum) < min){
            min = abs(sum);
            first = i;
            second = j;
        }

        
        if(sum > 0){
            j--;
            
            printf("hello");
        }
        else{
            i++;
            
            printf("bello");
        }
        
        
        
    }
    
    printf("Lowest elemetns positions are %d%d",first,second);
}

int main() {
    int arr[] = {-20, -10, -5, 8, 11, 12};
    int i=0,j=5;
    sum_small(arr,i,j);
    
  
}
