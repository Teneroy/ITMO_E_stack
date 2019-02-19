//
// Created by alexc on 1/4/2019.
//
#include <fstream>
#include "Stack.h"
using namespace atdlist;

void readFile(Stack &s, const char * fname)
{
    std::ifstream myReadFile;
    myReadFile.open(fname);
    char name[20], address[20];
    if (myReadFile.is_open())
    {
        while ((!s.full()) && (!myReadFile.eof()))
        {
            myReadFile >> name;
            myReadFile >> address;
            s.push(elem(name, address));
        }
        myReadFile.close();
    }
}

int main()
{
    Stack a;
    char fname[256];
    std::cout << "File name: ";
    std::cin >> fname;
    readFile(a, fname);
    std::cout << "-------------------------------------------------------DATA FROM FILE:-----------------------------------------------" << std::endl;
    a.print();
    std::cout << "FULL: " << a.full() << std::endl;
    std::cout << "_____________________________________________________________________________________________________________________" << std::endl;
    std::cout << "-------------------------------------------------------POP:----------------------------------------------------------" << std::endl;
    a.pop();
    a.print();
    std::cout << "TOP: " << a.top().name << std::endl;
    std::cout << "_____________________________________________________________________________________________________________________" << std::endl;
    std::cout << "-------------------------------------------------------POP:----------------------------------------------------------" << std::endl;
    a.pop();
    a.print();
    std::cout << "_____________________________________________________________________________________________________________________" << std::endl;
    std::cout << "-------------------------------------------------------MAKENULL:-----------------------------------------------------" << std::endl;
    a.makenull();
    a.print();
    std::cout << "Empty: " << a.empty() << std::endl;
    std::cout << "_____________________________________________________________________________________________________________________" << std::endl;
return 0;
}