#include "STL.h"
#include "Data.h"
#include <vector>
#include <algorithm>
#include <iostream>

void SortVectorWithCondition()
{
    // Comparator comparatorObject;
    std::vector<Data> vec = { Data(18, "aaa"), Data(37, "bbb"), Data(37, "ccc"), Data(9, "ddd"), Data(-10, "eee"), Data(37, "fff"),
        Data(8, "ggg"), Data(37, "hhh"), Data(16, "iii"), Data(26, "jjj") };
    //std::sort(vec.begin(), vec.end(), comparatorObject);

    std::sort(vec.begin(), vec.end(), [&](Data lhs, Data rhs) {return (lhs.GetNum() < rhs.GetNum()); });

    for (auto i : vec)
    {
        std::cout << i.GetNum() << " ";
    }
    std::cout << std::endl;

    for (auto i : vec)
    {
        std::cout << i.GetString().c_str() << " ";
    }
    std::cout << std::endl;

    //auto itr = std::find(vec.begin(), vec.end(), [&](Data item) {return (item.GetNum() == tmp); });

    auto itr = std::find(vec.begin(), vec.end(), vec.back());

    std::cout << itr->GetString();
}