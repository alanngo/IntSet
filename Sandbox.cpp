#include "IntSet.h"
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    IntSet x;
    IntSet y;
    for (int i =0; i<5; i++)
    {
        x.add(i);
    }
    for (int i =0; i<5; i++)
    {
        y.add(i);
    }
    x.DumpData(cout);
    y.DumpData(cout);
    if (y.isSubsetOf(x))
    {
        cout<<"subset achieved"<<endl;
    }
    return 0;
}