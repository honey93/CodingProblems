#include <stdio.h>

void print_array(int [], int);



int main()
{
    printf("Hello, World!\n");
    
    int a[7] = {1,4,3,6,5,9,8};
    int size,i;
    size = sizeof(a)/sizeof(a[0]);
    print_array(a,size);
    
    return 0;
}


void print_array(int a[], int size){
    int i,temp;
    for(i=0;i<size/2;i++){
        temp = a[i];
        a[i] = a[size-i-1];
        a[size-i-1] = temp;
    }
    
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
}
