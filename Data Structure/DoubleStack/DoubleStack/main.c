
#include <stdio.h>
#include<stdlib.h>
typedef int SElemType;
typedef int Status;
typedef struct{
    int top[2],bot[2];
    SElemType *V;
    int m;
}DblStack;
Status InitDoubleStack(DblStack *S,int m){
    S->V=(SElemType*)malloc(m*sizeof(SElemType));
    S->bot[0]=-1;
    S->top[0]=-1;
    S->bot[1]=m;
    S->top[1]=m;
    return 1;
}
/*void isempty(DblStack *S,int m){
    if(S->top[0]==-1&&S->top[1]==m)
        printf("Stack is empty\n");
}
void isfull(DblStack *S,int m){
    if(S->top[1]-S->top[0]==1)
        printf("Stack is full\n");
}*/
int Isempty(DblStack S,int i){
    return S.top[i]==S.bot[i];
}
int IsFull(DblStack S){
    if(S.top[0]+1==S.top[1])
        return 1;
    else return 0;
}
Status DblPush(DblStack *S,int i,int value){
    if(S->top[1]-S->top[0]==1){
        return 0;
        
    }
    if(i==0){
        S->top[0]++;
        S->V[S->top[0]] = value;//报错
    }else{
        S->top[1]++;
        S->V[S->top[1]] = value;
    }
    return 1;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    
    printf("Hello, World!\n");
    return 0;
}
