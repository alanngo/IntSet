#include "IntSet.h"
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    IntSet x;
    x.add(1);
    x.add(2);
    x.print();
    x.reset();
    x.print();
    cout<<x.size()<<endl;

    return 0;
}