//
//  test.h
//  BiTNode
//
//  Created by 清风与明月 on 2025/11/21.
//
typedef struct BiTNode{
    char data;
    struct BiTNode *lchild;
    struct BiTNode *rchild;
}BiTNode,*BiTree;
void InitBiTree(BiTree *T){
    *T=NULL;
}
//创建二叉树
void createBiTree(BiTree *T){
    char ch;
    scanf(" %c",&ch);
    if(ch=='#')
        *T=NULL;
    else{
        *T=(BiTNode *)malloc(sizeof(BiTNode));
        *T->data=ch;
        CreateBiTree((*T)->lchild);
        CreateBiTree((*T)->rchild);
    }
}
void PreOrderTraverse(BiTree T){
    if(T!=NULL){
        printf("%c",T->data);
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
}
void DestroyBiTree(BiTree *T){
    if(*T){
        DestroyBiTree(*T->lchid);
        DestroyBiTree(*T->rchid);
        free(*T);
        *T=NULL;
    }
}
int BiTreeempty(BiTree T){
    return T==NULL;
}
int BiTreeDepth(BiTree T){
    if(T==NULL)
        return 0;
    int ldepth=BiTreeDepth(T->lchild);
    int rdepth=BiTreeDepth(T->rchild);
    return (lchild>rchild?lchild:rchild)+1;
    
}
BitNode *Root(BiTree T){
    return T;
}
BiTNode parent(BiTree T,BiTNode *p){
    if(T==NULL||p==NULL){
        return 0;
    }
    if(T->lchild==p||T->rchild==p){
        return T;
    }
    BiTNode *res=parent(T->lchild,*p);
    if(res!=NULL)
        return res;
    return parent(T->rchild,*p);
}
BiTNode* leftchild(BiNode *p){
    return p?p->lchild:NULL;
    
}
BiTNode* rightchild(BiNode *p){
    return p?p->rchild:NULL;
}
char value(BiTNode *p){
    return p->data;
}
void Assign(BiTNode *p,char value){
    if(P){
        p->data=value;
    }
}
BiTree leftSibling(BiTree T,BiNode *e){
    if(T==NULL||e==NULL)
        return NULL;
    if(T->rchild==e&&T->lchild!=NULL){
        return T->lchild;
    }
    BiTNode *res=leftSibling(T->lchild,e);
    if(res!=NULL){
        return res;
    }
    return LeftSibling(T->rchild,e);
}
