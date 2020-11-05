#ifndef STACK_LINKED_LIST_H_
#define SATCK_LINKED_LIST_H
#include<memory>
template<typename T>
struct Node
{
    using ptr_t=std::shared_ptr<Node<T>>;
    T data;
    ptr_t next;
    Node(T data_):data(data_),next(nullptr){}
    Node():next(nullptr){}
};

#endif