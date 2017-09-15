#include <iostream>


using namespace std;

void merge(int l[], int b[], int *final, int left, int right){
     cout << "\n";
     cout << "size of l is " << left;
     
     cout << l[0] << "second" << l[1] << "end";
     
     
     cout << "size of r is " << right;
     cout << "\n";
     int i=0,j=0,k=0;
    
    while(i<left && j<right){
            
            if(l[i] < b[j]){
                final[k++] = l[i++];
            }
            else{
                final[k++] = b[j++];
            }
    
    }
    
    while(i < left){
                final[k++] = l[i++];
              
    }
    
    while(j < right){
                final[k++] = b[j++];
             
    }
    
    
    

}


void merge_sort(int *a, int size){
    
    if(size == 1){
        return; 
    }
    
    int mid = size/2;
    
    int c[mid],d[size-mid],i;
    
    for(i=0;i<mid;i++){
        c[i] = a[i];
        cout  << i << "th character" << c[i] << '\n';
    }
    
    for(i=mid;i<size;i++){
        d[i-mid] = a[i];
        
       cout  << i-mid << "th character of d" << d[i-mid] << '\n';
    }
    
    
    merge_sort(c,mid);
    merge_sort(d,size-mid);
    merge(c,d,a,mid,size-mid);
    cout << "New Array" << "\n";
        
    for(i=0;i<size;i++){
        
        cout << a[i];
    }
    
    cout << "End Array" << "\n";
    
}


int main() {
    
    int a[] = {5,4,6},i=0;
    
    int size = sizeof(a)/sizeof(a[0]);
    
    merge_sort(a,size);

    for(i=0;i<size;i++)
    cout <<a[i];
}
