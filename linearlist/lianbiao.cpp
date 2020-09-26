typedef struct
{
    listelem* next;
    int data;
}listelem;
listelem* L;
void init(listelem*&l,int a[]);//C语言根本就没有引用传递，只有值传递
void headinsert(listelem*&l,int e);
void tailinsert(listelem*&l,int e);
void insert(listelem*&l,int n,int e);//insert e at n
void delelem(listelem*&l,int n,int &e);//del the value in n and return by e
//C++是如何封装的？
