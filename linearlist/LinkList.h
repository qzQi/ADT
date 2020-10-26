#ifndef LINKLIST_H
#define LINKLIST_H

#include<stdio.h>
#include<stdlib.h>//is this right
typedef char ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode*next;
}LinkList;

void CreateListHead(LinkList*&L,ElemType a[],int n);
void CreateListTail(LinkList*&L,ElemType a[],int n);
void InitList(LinkList*&L);
void DestroyList(LinkList*&L);
bool ListEmpty(LinkList*L);
int ListLength(LinkList*L);
void ShowList(LinkList*L);
bool GetListElem(LinkList*L,int i,ElemType&e);
int LocateElem(LinkList*L,ElemType e);
bool ListInsert(LinkList*&L,ElemType e);
bool ListDelete(LinkList*&L,ElemType&e);


#endif