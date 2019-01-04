//
// Created by alexc on 1/4/2019.
//

#ifndef ITMO_E_STACK_STACK_H
#define ITMO_E_STACK_STACK_H
#define S_SIZE 4
#include "../ITMO_E_listmerge/List.h"
using namespace arrlist;

class Stack
{
public:
    Stack();
    ~Stack();
    void push(elem x);
    elem pop();
    elem top();
    void makenull();
    void print();
private:
    bool full();
    bool empty();
    List _ob;
    int _size;
};

#endif //ITMO_E_STACK_STACK_H
