#include "ExceptionHandling.h"
#include <iostream>
void ExceptionHandling::TestMethod1()
{
    try
    {
        TestMethod2();
        TestMethod3();
    }
    catch (int ex)
    {
        std::cout << "Handling exception from TestMethod2(). Exception is : " << ex << std::endl;
    }
}
void ExceptionHandling::TestMethod2()
{
    std::cout << "TestMethod2()" << std::endl;
    throw 4;
}
void ExceptionHandling::TestMethod3()
{
    std::cout << "TestMethod2()" << std::endl;
    throw;
}
