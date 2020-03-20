#include <stdio.h>
#include <stdlib.h>
#define LARGE 102
char pop(char stack[] , int *top){
    *top = *top - 1;
    return stack[*top + 1];
}

void push(char stack[] , int *top , char data){
    stack[*top + 1] = data;
    *top = *top + 1;
}

void traverse_stack(char stack[] , int top){
    for(int i = 0; i<top; i++){
        printf("%c " , stack[i]);
    }
    printf("\n");
}

int main(){
    int t, n, k;
    int  num_h , num_t;
    char inp;
    scanf("%d" , &t);
    
    for(int i = 0; i<t; i++){
        scanf("%d" , &n);
        scanf("%d" , &k);

        char stack[LARGE];
        int top = -1;
        num_h = 0;
        num_t = 0;
        
        for(int j = 0; j<2 * n - 1; j++){
            scanf("%c" , &inp);
            if(inp!=' '){
                push(stack , &top , inp);
            }
            if(inp=='H'){
                num_h++;
            }else if(inp=='T'){
                num_t++;
            }
        }
        traverse_stack(stack , top);
        char popped;
        for(int j = 0; j<k; j++){
            popped = pop(stack , &top);
            if(popped=='H'){
                int tmp = num_h - 1;
                num_h = num_t;
                num_t = tmp;

                for(int i = 0; i<top; i++){
                    if(stack[i]=='H'){
                        stack[i] = 'T';
                    }else{
                        stack[i] = 'H';
                    }
                }
            }else{
                num_t--;
            }
        }
        printf("%d\n" , num_h);
    }
    return 0;
}