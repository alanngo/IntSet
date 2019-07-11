#include "IntSet.h"
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    IntSet x;
    for (int i =0; i<10; i++)
    {
        x.add(i);
    }
    x.DumpData(cout);
    x.remove(5);
    x.DumpData(cout);
    return 0;
}