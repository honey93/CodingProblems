#include <stdio.h>

void reach_end(int [], int);
void merge_both(int [], int [], int, int);

int main()
{
    printf("Hello, World!\n");
    int A[6] = {2,4,9,10,'\0','\0'};
    int B[2] = {3,6};
    
    reach_end(&A[0],6);
    merge_both(A,B,6,2);
    return 0;
}

void reach_end(int *A, int length) {
    //return A;
    int start,temp;
    start = temp = 0;
    
    while(start <length){
        
        if(A[length - start -1] != '\0'){
            A[length - temp -1] = A[length - start -1];
            temp++;
        }
        
        start++;
    }

}

void merge_both(int A[], int B[],int length,int small){
    int i,b_index;
    b_index = 0;
    int a_index = 0;
   for(i=0; i<length; i++){
        if( (A[small+a_index] < B[b_index] && ((small + a_index) < length))){
            A[i] = A[small+a_index];
                a_index++;
            //printf("y");
            //printf("%d",A[small+i]);
        }
        else{
            A[i] = B[b_index];
            b_index++;
            if(b_index == 2){
                
                 break;
            }
        }
   }
   
   
   for(i=0; i<length; i++){
       printf("%d",A[i]);
   }
}





