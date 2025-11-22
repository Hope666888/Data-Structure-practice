//
//  main.c
//  BiTNode
//
//  Created by 清风与明月 on 2025/11/20.
//

#include <stdio.h>
#include<stdlib.h>
struct ElemType{
    int value;
};
typedef struct BiTNode{
    struct ElemType data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;


int main(int argc, const char * argv[]) {
    // insert code here...
    BiTree root =NULL;
    root=(BiTree)malloc(sizeof(BiTNode));
    if(root==NULL){
        printf("根结点内存分配失败");
        return -1;
    }
    root->data.value=1;
    root->lchild=NULL;
    root->rchild=NULL;


    //插入新节点
    BiTNode *p=(BiTNode*)malloc(sizeof(BiTNode));
    p->data.value=2;
    p->lchild=NULL;
    p->rchild=NULL;
    root->lchild=p;
    printf("Hello, World!\n");
    return 0;
}
