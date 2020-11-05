#include<iostream>
#define maxsize 10     //define end of no ';'
using namespace std;
typedef char ElemType;
typedef struct satck
{
    int top;
    ElemType *val;
}SqStack;

void InitStack(SqStack*& s)
{
    s->top=0;
    s->val=new ElemType[maxsize];
    //cout<<"ok"<<endl;
}
void DestroyStack(SqStack*&s)
{
    s->top=0;
    delete []s->val;
    s->val=nullptr;
}
bool StackEmpty(SqStack*s)
{
    if(!s->top)return true;
    return false;
}
// push pop get
void Push(SqStack*&s,ElemType e)
{
    if(s->top>=maxsize){cout<<"out of range"<<endl;return ;}
    s->val[s->top]=e;
    s->top++;
}
void pop(SqStack*&s,ElemType&e)
{
    if(!s->top){cout<<"no value"<<endl; return;}
    e=s->val[--s->top];
}
void GetTop(SqStack*s,ElemType&e)
{
    e=s->val[--s->top];
    s->top++;
}
int main()
{
    SqStack *s;
    InitStack(s);
    if(StackEmpty(s))cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;
    Push(s,'a'); Push(s,'b'); Push(s,'c'); Push(s,'d');
    Push(s,'e');
    if(StackEmpty(s))cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;

}