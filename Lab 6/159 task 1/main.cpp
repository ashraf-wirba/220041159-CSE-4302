#include <iostream>
#include "counter.h"

using namespace std;

int main()
{
    counter c1,c2,c3;
    c3=c1+c2;
    cout<<c3.getCount();
    return 0;
}
