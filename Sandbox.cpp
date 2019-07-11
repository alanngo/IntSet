#include "IntSet.h"
#include <iostream>
#include <cassert>
using namespace std;

void testBasic()
{
    cout<<"TESTING BASIC FUNCTIONALITY"<<endl;
    IntSet x;
    for (int i =0; i<6; i++)
    {
        x.add(i);
    }
    x.DumpData(cout);
    x.remove(1);
    x.DumpData(cout);

}
void testUnion()
{
    cout<<"TESTING UNION"<<endl;
    IntSet x;
    IntSet y;
    for (int i =0; i<3; i++)
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
}
void testIntersect()
{
    cout<<"TESTING INTERSECT"<<endl;
    IntSet x;
    IntSet y;
    for (int i =0; i<5; i++)
    {
        x.add(i);
    }
    for (int i =0; i<3; i++)
    {
        y.add(i);
    }
    y.add(5);
    y.add(6);

    IntSet z = x.intersect(y);
    x.DumpData(cout);
    y.DumpData(cout);
    z.DumpData(cout);
}
void testSubtract()
{
    cout<<"TESTING DIFFERENCE"<<endl;
    IntSet x;
    IntSet y;
     for (int i =0; i<5; i++)
    {
        x.add(i);
    }
    for (int i =0; i<3; i++)
    {
        y.add(i);
    }
    y.add(5);
    y.add(6);

    IntSet z = x.subtract(y);
    x.DumpData(cout);
    y.DumpData(cout);
    z.DumpData(cout);
}
void testSubset()
{
    cout<<"TESTING SUBSET"<<endl;
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
    x.DumpData(cout);
    y.DumpData(cout);
    if (y.isSubsetOf(x))
    {
        cout<<"y is a subset of x"<<endl;
    }
}
int main()
{
    testBasic();
    testUnion();
    testIntersect();
    testSubtract();
    testSubset();

    return 0;
}