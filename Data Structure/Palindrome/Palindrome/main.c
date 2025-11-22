//
//  main.c
//  Palindrome
//
//  Created by 清风与明月 on 2025/11/19.
//

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
    char *data;
    int top;
    int maxsize;
}Stack;
void InitStack(Stack *S,int size){
    S->data=(char*)malloc(size*sizeof(char));
    S->top=-1;
    S->maxsize=size;
}
//入栈
void push(Stack *S,char ch){
    if(S->top==S->maxsize-1)
    {
        printf("Stack is full\n");
        return ;
    }
    S->data[++S->top]=ch;
}
//出栈
char Pop(Stack *S){
    if(S->top==-1){
        printf("Stack is empty\n");
        return '\0';
    }
    return S->data[S->top--];
}
int isempty(Stack *S){
    return (S->top == -1) ? 1 : 0;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
int IsPalindrome(char *t){
    InitStack(S);
    len=strlen(t);
    for(i=0;i<len/2;i++){
        push(S,t[i]);
    }
    if(i%2!=0){
        i++;
    }
    while(!EmptyStack(s)){
        temp=Pop(S);
        if(temp!=t[i]){
            return 0;
        }else{
            i++;
        }
    }
    return 1;
}
