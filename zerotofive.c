#include <stdio.h>

int ztofrec(n){
    
    int digit;
    if (n == 0)
        return 0;
    
    digit = n%10;
    
    if (digit == 0){
        digit = 5;
    }
    
    return (ztofrec(n/10)*10 + digit);
    
}

int ztof(int n){
    
    if (n == 0)
    return 5;
    else
    return ztofrec(n);
}


int main()
{
    int num = 10070,new;
    new = ztof(num);
    printf("%d",new);
    return 0;
}

