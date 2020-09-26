#define maxsize 50

typedef struct arry
{
    int length;
    int arry[maxsize];
}arrylist;

void initlist();
void insert();
int get();
int del();
