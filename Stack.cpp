//
// Created by alexc on 1/4/2019.
//
#include "Stack.h"

void Stack::push(elem x)
{
    _ob.insert(_ob.firstL(), x);
}

elem Stack::pop()
{
    elem x = _ob.retrieve(_ob.firstL());
    _ob.deleteEl(_ob.firstL());
    return x;
}

elem Stack::top()
{
    return _ob.retrieve(_ob.firstL());
}

bool Stack::full()
{
    return false;
}

bool Stack::empty()
{
    return _ob.endL() == 0;
}

void Stack::makenull()
{
    _ob.makenull();
}

void Stack::print()
{
   _ob.printList();
}