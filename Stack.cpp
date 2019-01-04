//
// Created by alexc on 1/4/2019.
//
#include "Stack.h"

node fake_stack;

Stack::Stack()
{
    _size = 0;
}

Stack::~Stack()
{
    _ob.makenull();
}

void Stack::push(elem x)
{
    if(full())
    {
        std::cout << "Stack is full" << std::endl;
    } else
    {
        _ob.insert(_ob.firstL(), x);
        _size++;
    }
}

elem Stack::pop()
{
    if(empty())
    {
        std::cout << "Stack is empty" << std::endl;
        return fake_stack.data;
    }
    elem x = _ob.retrieve(_ob.firstL());
    _ob.deleteEl(_ob.firstL());
    _size--;
    return x;
}

elem Stack::top()
{
    if(empty())
    {
        std::cout << "Stack is empty" << std::endl;
        return fake_stack.data;
    }
    return _ob.retrieve(_ob.firstL());
}

bool Stack::full()
{
    return _size == S_SIZE;
}

bool Stack::empty()
{
    return _size == 0;
}

void Stack::makenull()
{
    if(!empty())
    {
        _size = 0;
        _ob.makenull();
    }
}

void Stack::print()
{
   _ob.printList();
}