#include "LinkList.h"
void InitList(LinkList*&L)
{
    L=(LinkList*)malloc(sizeof(LinkList));
    L->next=NULL;
}
void CreateListHead(LinkList*&L,ElemType a[],int n)
{
    int b=0;LinkList*p;
    while(b<n)
    {
        p=(LinkList*)malloc(sizeof(LinkList));
        p->data=a[b];
        p->next=L->next;
        L->next=p;
        ++b;
    }
}
void CreateListTail(LinkList*&L,ElemType a[],int n)
{
    int b=0;LinkList*p=L;LinkList*q;
    while(b<n)
    {
        q=(LinkList*)malloc(sizeof(LinkList));
        q->data=a[b];
        p->next=q;
        p=q;
    }
    p->next=NULL;
}
void DestroyList(LinkList*&L)
{
    LinkList*p=L->next;LinkList*q=p;
    while(p!=NULL)
    {
        q=p->next;
        free(p);
        p=q;
    }
    free(L);
}
bool ListInsert(LinkList*&L,int i,ElemType e)
{
    LinkList*p=L->next;
    if(p==NULL||i>ListLength(L))return false;
    LinkList*pre=L;
    int a=1;
    while(a!=i)
    {
        pre=pre->next;
        p=p->next;
        ++a;
    }
    LinkList*r=(LinkList*)malloc(sizeof(LinkList));
    pre->next=r;
    r->next=p;
    return true;
}
bool ListDelete(LinkList*&L,int i,ElemType&e)
{
    LinkList*p=L->next;//p的位置就是第N个数据所在的位置
    if(p==NULL||i>ListLength(L))return false;
    LinkList*pre=L;
    int a=1;
    while(a!=i)
    {
        pre=pre->next;
        p=p->next;
        ++a;
    }
    pre->next=p->next;
    free(p);
    return true;
}