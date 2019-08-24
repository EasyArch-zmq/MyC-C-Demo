//
// Created by zmq on 19-8-22.
//

#include "MyList.h"
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int value;
    struct node *next;
}Node;
int len= sizeof(Node);
Node *cread_node(Node *head,int value);

int main(){
    int n;
    Node *head=(Node *)malloc(len);
    head->next=NULL;
    Node *p=NULL;
    do{
        scanf("%d",&n);
        if(n==0)break;
        head=cread_node(head,n);
    }while(1);
    for(p=head->next;p;p=p->next){
        printf("%d\n",p->value);
    }
    return 0;
}
//插入节点并排序
Node *cread_node(Node *head,int value){
    Node *pnew,*p,*q;
    pnew=(Node *)malloc(len);
    pnew->next=NULL;
    pnew->value=value;
    q=head;p=q->next;
    //排序
    while(p&&p->value>pnew->value){
        q=p;
        p=p->next;
    }
    pnew->next=p;
    q->next=pnew;
    return head;
}