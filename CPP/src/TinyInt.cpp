#include "TinyInt.h"
#include <iostream>

TinyInt::TinyInt()
{

}

TinyInt::TinyInt(int a)
{
/*    if (a < 64)
    {
        m_nTinyInt = a;
    }
    else
    {
        std::cout << "ERROR - Too big number!" << std::endl;
    }*/

    if (a >= 64)
    {
        throw std::string("Too big number to handle");
    }
    m_nTinyInt = a;
}

TinyInt::~TinyInt()
{

}
