/*
Who - Sumit Pandey
When - 30-Mar-2018
For what - Common C and C++ concepts
*/

#include <iostream>
#include "CConcepts.h"
using namespace std;

void CConcepts::CheckIncrementDecrementOperators()
{
    int i = 9;
    //++i++;
    //++i returns lvalue but i++ returns rvalue
    //(i++)++; //This will not compile but below one compile
    (++i)++;
    ++i = 15;
    //i++ = 16; //This will not compile

    cout << i << endl;
}

void CConcepts::CheckShiftOperators()
{
    //Works only on integral values
    //Left shit works as multiplication
    //Right shift works as division
    int i = 9;    // Binary of 9 = 00001001

    int j = i << 1;  // = 18, multiplication with 2
    int k = i >> 1;  // = 4, division by 2
    cout << j <<" "<< k << endl;

    int ii = -9;   //1's complement of 9 = 11110110
                   //2's complement of 9 = 11110110 + 1 = [11110111] =  This is negative 9

    int jj = ii << 1;  // = 18, multiplication with 2

    //For negative number right shift pads 1 on left most place
    int kk = ii >> 1;  // = 4, division by 2 
    cout << jj << " " << kk << endl;
}
