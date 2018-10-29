#include "Data.h"

Data::Data()
: m_Num(0)
, m_Str("")
, m_ptr2D(nullptr)
{
    m_ptr2D = new int*[SIZE];
    for (int count = 0; count < SIZE; ++count)
    {
        m_ptr2D[count] = new int;
        *(m_ptr2D[count]) = count;
    }
}

Data::Data(int num, std::string str)
: m_Num(num)
, m_Str(str)
, m_ptr2D(nullptr)
{
    m_ptr2D = new int*[SIZE];
    for (int count = 0; count < SIZE; ++count)
    {
        m_ptr2D[count] = new int;
        *(m_ptr2D[count]) = count;
    }
}

Data::~Data()
{
    /*for (int count = 0; count < SIZE; ++count)
    {
        delete m_ptr2D[count];
        m_ptr2D[count] = nullptr;
    }
    delete [] m_ptr2D;
    */
}

bool Data::operator==(const Data& rhs) const
{
    if (m_Num && rhs.m_Num)
    {
        return m_Num == rhs.m_Num;
    }
    return false;
}

std::string Data::GetString()
{
    return m_Str;
}

int Data::GetNum()
{
    return m_Num;
}

std::ostream& operator <<(std::ostream& os, const Data& data)
{
    os << std::endl;
    for (int count = 0; count < data.SIZE; ++count)
    {
        int tmp = *data.m_ptr2D[count];
        os << *data.m_ptr2D[count];
        if (count != data.SIZE - 1)
            os << ", ";
    }
    os << std::endl;
    return os;
}

std::istream& operator >>(std::istream& is, Data& data)
{
    for (int count = 0; count < data.SIZE; ++count)
    {
        is >> *(data.m_ptr2D[count]);
        int tmp = *data.m_ptr2D[count];
    }
    return is;
}
