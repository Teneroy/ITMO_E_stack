//
// Created by alexc on 1/4/2019.
//

#ifndef ITMO_E_STACK_STACK_H
#define ITMO_E_STACK_STACK_H
#include "../ITMO_E_listmerge/List.h"
using namespace arrlist;

namespace atdlist
{
    class Stack
    {
    public:
        void push(const elem &x);
        elem pop();
        elem top() const;
        void makenull();
        void print() const;
        bool full() const;
        bool empty() const;
    private:
        List _ob;
    };
}

namespace stack1
{
    enum{S_SIZE = 6};

    class Stack
    {
    public:
        Stack();
        void push(const elem &x);
        elem pop();
        elem top() const;
        void makenull();
        void print() const;
        bool full() const;
        bool empty() const;
    private:
        elem s[S_SIZE];
        int up;
    };
}


namespace stack2
{

    struct el
    {
        el(el * e, const elem & c):next(e),val(c)
        {}
        el * next;
        elem val;
    };

    class Stack
    {
    public:
        Stack();
        ~Stack();
        void push(const elem &x);
        elem pop();
        elem top() const;
        void makenull();
        void print() const;
        bool full() const;
        bool empty() const;
    private:
        el * head;
    };
}

#endif //ITMO_E_STACK_STACK_H
