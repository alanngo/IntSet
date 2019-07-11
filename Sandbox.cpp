#include "IntSet.h"
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    IntSet x;
    IntSet y;
    for (int i =0; i<6; i++)
    {
        x.add(i);
    }
    for (int i =4; i>=0; i--)
    {
        y.add(i);
    }
    IntSet z = x.unionWith(y);
    x.DumpData(cout);
    y.DumpData(cout);
    z.DumpData(cout);
    if (y.isSubsetOf(x))
    {
        cout<<"y is a subset of x"<<endl;
    }

    return 0;
}