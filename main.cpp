//
// Created by alexc on 1/4/2019.
//
#include "Stack.h"

int main()
{
    elem x("x", "x");
    elem y("y", "y");
    elem z("z", "z");
    elem k("k", "k");
    Stack a;
    a.push(x);
    a.push(y);
    a.push(z);
    a.push(k);
    a.push(x);
    a.print();
    a.pop();
    a.print();
    std::cout << "TOP Result: " << a.top().name << std::endl;
    a.pop();
    a.pop();
    a.pop();
    a.pop();
    a.push(x);
    a.push(y);
    a.print();
    a.makenull();
    a.print();
return 0;
}