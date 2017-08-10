#include <stdio.h>

int missing(int a[], int b[], int length){
    int i,left,right,mid,index;
    printf("length is %d", length);
    left = 0;
    right = length-1;
    index = length - 1;
    
    while(left <= right){
        
        mid = (left + right)/2;
 //       printf("mid is %d",mid);
        
        if(a[mid] == b[mid]){
            left = mid + 1;
        }
        
        else{
            right = mid - 1;
            index = mid;
            //printf("%d",mid);
             //printf("hello");
            
        }
    }
    
    //int length = (sizeof(a));
    //printf("%d",length);
    
    return index;
}

int main()
{
    int a[7] = {2, 4, 6, 8, 9, 10, 12};
    int b[6] =    {2, 4, 6, 8, 10, 12};
    int length = sizeof(b)/sizeof(b[0]);

    printf("Missing no is %d", a[missing(a,b,length)]);    
    return 0;
}
