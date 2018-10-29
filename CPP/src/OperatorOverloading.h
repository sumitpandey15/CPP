#include <string>

class Data
{
public:
    Data(int num, std::string str) : m_Num(num), m_Str(str) {}

    bool operator==(const Data& rhs) const
    {
        if (m_Num && rhs.m_Num)
        {
            return m_Num == rhs.m_Num;
        }
        return false;
    }



    std::string GetString()
    {
        return m_Str;
    }

    int GetNum()
    {
        return m_Num;
    }

private:
    int m_Num;
    std::string m_Str;
};


