//循环double list
#include<iostream>
using ElemType=char;
using namespace std;
typedef struct node
{
    ElemType val;
    struct node* next;
    struct node* pre;
}DlinkNode;
void InitList(DlinkNode*&L)
{
    L=(DlinkNode*)malloc(sizeof(DlinkNode));
    L->next=L;
    L->pre=L;
}
bool ListEmpty(DlinkNode*L)
{
    if(L->next==L)return true;
    return false;
}
void copy(DlinkNode*&L,ElemType a[],int n)
{
    DestroyList(L);InitList(L);
    DlinkNode*p=L;;DlinkNode*r;
    for(int i=0;i<n;++i)
    {
        r=(DlinkNode*)malloc(sizeof(DlinkNode));
        r->val=a[i];
        p->next=r;
        r->pre=p;
        p=r;
    }
    p->next=L;L->pre=p;
}
void DestroyList(DlinkNode*&L)
{
    DlinkNode*p=L->next;DlinkNode*pre=p;
    while(p!=L)
    {
        pre=p->next;
        free(p);
        p=pre;
    }
    free(L);
}
int ListLength(DlinkNode*L)
{
    int n=0;
    DlinkNode*p=L->next;
    while(p!=L)
    {
        ++n;p=p->next;
    }
    return n;
}
void ListInsert(DlinkNode*&L,int i,ElemType e)
{
    DlinkNode*r=(DlinkNode*)malloc(sizeof(DlinkNode));
    r->val=e;
    if(i>=ListLength(L))
    {
        r->pre=L->pre;
        L->pre->next=r;
        r->next=L;
        return ;
    }
    int n=1;
    /*
    DlinkNode*p=L->next;DlinkNode*pre=L;
    while(n<i)
    {
        pre=p;
        p=p->next;
        ++n;
    }
    pre->next=r;r->pre=pre;r->next=p;p->pre=r;
    */
   DlinkNode*p=L->next;
   while(n<i)
   {
       p=p->next;++n;
   }
   r->next=p;
   r->pre=p->pre;
   p->pre->next=r;
   p->pre=r;
}
void ListDelete(DlinkNode*&L,int i,ElemType &e)
{
    if(!i)return ;
    if(i>=ListLength(L))
    {
        e=L->pre->val;
        L->pre->pre->next=L;
        L->pre=L->pre->pre;
        free(L->pre);
        return ;
    }
    int n=1;
    DlinkNode*p=L->next;
    while(n<i)
    {
        ++n;
        p=p->next;
    }
    e=p->val;
    p->pre->next=p->next;
    p->next->pre=p->pre;
    free(p);
    return ;
}
int main()
{
    DlinkNode*L;

}