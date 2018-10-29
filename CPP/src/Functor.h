#include "Data.h"
#include <string>

class Comparator
{
public:
    bool operator() (Data lhs, Data rhs)
    { 
        return (lhs.GetNum() < rhs.GetNum()); 
    }
};

struct Comparator1
{
    Comparator1(int num) : m_Num(num) {}
    int m_Num = 0;

    bool operator() (Data lhs) { return (lhs.GetNum() == m_Num); }
};
