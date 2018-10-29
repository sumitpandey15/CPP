#include "Functor.h"
#include "STL.h"
#include "ExceptionHandling.h"
#include "TinyInt.h"
#include <iostream>
#include <vector>


void TestTinyInt()
{
    try
    {
        int a = 59;
        TinyInt t1(6);
        int b = a + t1;
        TinyInt t2;
        t2 = b + t1;
        std::cout << b << " " << t2;
    }
    catch (std::string str)
    {
        std::cout << str.c_str() << std::endl;
    }
}


int main()
{
    //SortVectorWithCondition();
    //Data d;
    //std::cin >> d;
    //std::cout << d;

    TestTinyInt();

    ExceptionHandling exOb;
    exOb.TestMethod1();

    std::cout << "\n\n\n\nPRESS ENTER TO EXIT!";
    std::cin.get();
    //std::cin.get();
    return 0;
}