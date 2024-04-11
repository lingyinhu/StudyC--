#include <iostream>

int main() {
    using namespace std;

    int a1 = 10;
    int b1 = 3;
    int c1 = a1 % b1; // c1 is 1, the remainder of 10 divided by 3.
    cout << c1 << endl; // prints "1" to the console.

    int a2 = 10;
    int b2 = 20;
    cout << a2 % b2 << endl; // prints "10" to the console.
    cout << b2 % a2 << endl; // prints "0" to the console.

    int a3 = 10;
    int b3 = 0; // division by zero is undefined behavior.
    //int c3 = a3 % b3; // undefined behavior.
    //cout << c3 << endl; // undefined behavior.

    double d1 = 10.5;
    double d2 = 3.25; // the result is a double.
    // cout << d1 % d2 << endl; //

    system("pause");
    return 0;
}

