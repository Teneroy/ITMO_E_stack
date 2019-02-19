//
// Created by alexc on 1/4/2019.
//
#include "Stack.h"

void atdlist::Stack::push(const elem &x)
{
    _ob.insert(_ob.firstL(), x);
}

elem atdlist::Stack::pop()
{
    elem x = _ob.retrieve(_ob.firstL());
    _ob.deleteEl(_ob.firstL());
    return x;
}

elem atdlist::Stack::top() const
{
    return _ob.retrieve(_ob.firstL());
}

bool atdlist::Stack::full() const
{
    return false;
}

bool atdlist::Stack::empty() const
{
    return _ob.endL() == 0;
}

void atdlist::Stack::makenull()
{
    _ob.makenull();
}

void atdlist::Stack::print() const
{
   _ob.printList();
}

/*_____________STACK1_________________*/

stack1::Stack::Stack()
{
    up = -1;
}

void stack1::Stack::push(const elem & x)
{
    s[++up] = x;
}

elem stack1::Stack::pop()
{
    return s[up--];
}

elem stack1::Stack::top() const
{
    return s[up];
}

bool stack1::Stack::full() const
{
    return up == S_SIZE - 1;
}

bool stack1::Stack::empty() const
{
    return up == -1;
}

void stack1::Stack::makenull()
{
    up = -1;
}

void stack1::Stack::print() const
{
    for (int i = 0; i <= up; i++)
    {
        std::cout << std::setw(25) << s[i].name;
        std::cout << std::setw(25) << s[i].adress << std::endl;
    }
}

/*_____________STACK2_________________*/

stack2::Stack::Stack()
{
    head = nullptr;
}

stack2::Stack::~Stack()
{
    makenull();
}

void stack2::Stack::push(const elem & x)
{
    head = new el(head, x);
}

elem stack2::Stack::pop()
{
    elem c = head -> val;
    el * p = head;
    head = head -> next;
    delete p;
    return c;
}

elem stack2::Stack::top() const
{
    return head -> val;
}

bool stack2::Stack::full() const
{
    return false;
}

bool stack2::Stack::empty() const
{
    return head == nullptr;
}

void stack2::Stack::makenull()
{
    el * p = head;
    while(head != nullptr)
    {
        head = head -> next;
        delete p;
        p = head;
    }
}

void stack2::Stack::print() const
{
    el * temp = head;
    while(temp != nullptr)
    {
        std::cout << std::setw(25) << temp -> val.name;
        std::cout << std::setw(25) << temp -> val.adress << std::endl;
        temp = temp -> next;
    }
}