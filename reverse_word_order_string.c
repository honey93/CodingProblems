#include <stdio.h>

void reverse_word(char *i, char *e){
    char temp;
    while(i < e){
        temp = *i;
        *i = *e;
        i++;
        *e = temp;
        e--;
        
    }
    //printf("%c",*i);
    //printf("%c",*e);
}


void reverse(char *s){
    char *temp;
    temp = s;
    char *start;
    char *end;
    start = temp;
    end = temp;
    while(*temp){
       // printf("%c",*temp);
        temp++;
        if(*temp == '\0'){
            
            reverse_word(start,temp-1);
            
        }
                
        if(*temp == ' '){
            end = temp - 1;
            //printf("%c",*start);
            
            //printf("%c",*end);
            reverse_word(start,end);
            start = temp + 1;
            //printf("%c",*(temp-1));
            
        }
        
        
    }
    
    
    reverse_word(s,temp-1);
}


int main()
{   
    char s[] = "my name is honey";
    reverse(s);
    printf("%s",s);
    //printf("Hello, World!\n");

    return 0;
}

