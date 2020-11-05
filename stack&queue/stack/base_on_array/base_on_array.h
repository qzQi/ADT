template  <typename T>
class ArrayStack
{
public:
    ArrayStack();
    ArrayStack(int _count);
    ~ArrayStack();
    void push(T data);
    T pop();
    T peek();
    int stacksize();
    int stackMaxsize();
private:
    int flag;
    int count;
    T *array;
}