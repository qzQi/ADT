#include<iostream>
using namespace std;
typedef char ElemType;
//using ElemType=char;
//头结点 首节点（首数据）  尾结点
typedef struct clinklist
{
    ElemType val;
    struct clinklist* next;
    
}LinkNode;

void InitList(LinkNode*&L)
{
    L=(LinkNode*)malloc(sizeof(LinkNode));
    L->next=L;
}
bool ListEmpty(LinkNode*L)
{
    if(L->next==L)return true;
    return false;
}
int ListLength(LinkNode*L)
{
    if(ListEmpty(L))return 0;
    LinkNode*p=L->next;
    int num=0;//不要迷惑于0与1
    while(p!=L)
    {
        num++;
        p=p->next;
    }
    return num;
}
void DispList(LinkNode*L)
{
    //if(ListEmpty(L))return ;
    LinkNode*p=L->next;
    while(p!=L)
    {
        cout<<p->val;
        p=p->next;
    }
    return ;
}
void insert_tail(LinkNode*&L,ElemType e)
{
    LinkNode*p=L->next;
    LinkNode*pre=L;
    while(p!=L)
    {
        pre=p;
        p=p->next;
    }
    LinkNode*r=(LinkNode*)malloc(sizeof(LinkNode));
    r->val=e;
    pre->next=r;
    r->next=L;//r->next=p;
}
void ListInsert(LinkNode*L,int i,ElemType e)
{
    if(i>=ListLength(L))
    {insert_tail(L,e);return;}
    int n=1;
    LinkNode*p=L->next;LinkNode*pre=L;
    while(n<i)
    {
        ++n;pre=p;p=p->next;
    }
    LinkNode*r=(LinkNode*)malloc(sizeof(LinkNode));
    r->val=e;
    r->next=p;
    pre->next=r;
}
void DestroyList(LinkNode*&L)
{
    LinkNode*p=L->next;LinkNode*pre;
    while(p!=L)
    {
        pre=p->next;
        free(p);
        p=pre;
    }
    free(L);
}
int LocateElem(LinkNode*L,ElemType e)//return location
{
    int flag=0;
    int n=1;
     
}
void GetElem(LinkNode*L,int i,ElemType &e)
{

}
void ListDelete(LinkNode*&L,int i,ElemType &e)
{
    
}
int main()
{
    LinkNode*L;

}
