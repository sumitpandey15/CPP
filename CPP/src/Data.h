#include <string>
#include <iostream>

class Data
{
public:
    enum Size
    {
        SIZE = 4
    };

    Data();
    Data(int num, std::string str);
    ~Data();
    bool operator==(const Data& rhs) const;

    friend std::ostream& operator << (std::ostream& os, const Data& data);
    friend std::istream& operator >> (std::istream& is, Data& data);

    std::string GetString();
    int GetNum();

private:

    int m_Num;
    std::string m_Str;
    int** m_ptr2D;
};

std::ostream& operator << (std::ostream& os, const Data& data);
std::istream& operator >> (std::istream& is, Data& data);
