#include<iostream>
using namespace std;
using ElemType=char;
typedef struct stack
{
    ElemType val;
    struct stack *next;
}LinkStNode;
void InitStack(LinkStNode*&s)
{
    s=new LinkStNode;
    s->next=nullptr;
}
void DestroyStack(LinkStNode*&s)
{
    LinkStNode*p=s->next;LinkStNode*pre;
    while(p!=nullptr)
    {
        pre=p->next;
        delete p;
        p=pre;
    }
    delete s;
    s=nullptr;
}
bool StackEmpty(LinkStNode*s)
{
    if(s->next==nullptr)return true;
    return false;
}
void  push(LinkStNode*&s,ElemType e)
{
    LinkStNode*r=new LinkStNode;
    r->val=e;
    r->next=s->next;
    s->next=r;
    cout<<"push  "<<e<<endl;
}
void pop(LinkStNode*&s,ElemType &e)
{
    e=s->next->val;
    LinkStNode*p=s->next;
    s->next=s->next->next;
    delete p;
}
void GetTop(LinkStNode*s,ElemType&e)
{
    e=s->next->val;
}
int main()
{
    LinkStNode* s;
    InitStack(s);
    if(StackEmpty(s))cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;
    ElemType a[]={'a','b','c','d','e'};
    for(int i=0;i<5;++i)
    push(s,a[i]);
    if(StackEmpty(s))cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;
    char val;
    for(int i=0;i<5;++i)
    {GetTop(s,val);
    cout<<val<<endl;
    pop(s,val);
    }
    
}