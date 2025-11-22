//
//  main.c
//  Structure2
//
//  Created by 清风与明月 on 2025/11/16.
//

#include <stdio.h>
#include<stdbool.h>
#define Maxlen 255
typedef struct{
    char ch[Maxlen];
    int length;
}SString;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    printf("Hello, World!\n");
    return 0;
}
bool SubString(SString *Sub,SString S,int pos,int len){
    if(pos+len-1>S.length){
        return false;
    }
    for (int i=pos; i<pos+len; i++) {
        Sub->ch[i-pos+1]=S.ch[i];
        
    }
    Sub->length=len;
    return true;
}
int strCompare(SString S,SString T){
    for (int i=1; i<=S.length&&i<=T.length; i++) {
        if(S.ch[i]!=T.ch[i]){
            return S.ch[i]-T.ch[i];
        }
    }
    return S.length-T.length;
}

int StrLength(SString S){
    int len=0;
    while(S.ch[len]!='\0'){
        len++;
    }
    return len;
}
int strindex(SString S,SString T){
    int i=1,n=StrLength(S),m=StrLength(T);
    SString sub;
    while(i<=n-m+1){
        SubString(&sub, S, i, m);
        if(strCompare(sub, T)!=0)
            ++i;
        else return i;
    }
    return 0;
}
int S_index(SString S,SString T){
    int i=1,j=1;
    while(i<=StrLength(S)&&j<=StrLength(T)){
        if(S.ch[i]==T.ch[j]){
            ++i;
            ++j;
        }else{
            i=i-j+2;
            j=1;
        }
    }
    if(j>StrLength(T)){
        return i-StrLength(T);
    }else{
        return 0;
    }
}
int index_KMP(SString S,SString T,int next[]){
    int i=1,j=1;
    while(i<=StrLength(S)&&j<=StrLength(T)){
        if(j==0||S.ch[i]==T.ch[j]){
            ++i;
            ++j;
        }else{
            j=next[j];
        }
        
    }
    if(j>T.length){
        return i-StrLength(T);
    }else{
        return 0;
    }
}
