#include <iostream>
#include "fun.h"

using namespace std;

int main()
{
    int a, b, c;

    cout<<a<<endl;
    a++;
    cout<<a<<endl;
    b = a;
    cout<<b<<endl;
    c = fun(a,b);
    cout<<c<<endl;
    
    system("pause");
    return 0;
}
