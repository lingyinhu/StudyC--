#include <iostream>

int main() {
    using namespace std;

    int a1 = 10;
    int b1 = 3;

    cout << "a1 = " << a1 << ", b1 = " << b1 << endl << endl;
    cout << "a1 + b1 = " << a1 + b1 << endl; // 加法运算符 + 用于整数类型。
    cout << "a1 - b1 = " << a1 - b1 << endl; // 减法运算符 - 用于整数类型。
    cout << "a1 * b1 = " << a1 * b1 << endl; // 乘法运算符 * 用于整数类型。
    cout << "a1 / b1 = " << a1 / b1 << endl; // 除法运算符 / 用于整数类型。注意结果是整数。

    int a2 = 10;
    int b2 = 0;
    cout << "a2 = " << a2 << ", b2 = " << b2 << endl << endl; // 除数不能为0。
    // cout << "a2 / b2 = " << a2 / b2 << endl; // 未定义行为。

    double a3 = 10.0; // 浮点数类型。
    double b3 = 3.0; // 浮点数类型。
    cout << "a3 = " << a3 << ", b3 = " << b3 << endl << endl; // 浮点数类型。
    cout << "a3 / b3 = " << a3 / b3 << endl; // 结果是浮点数。

    system("pause");
    return 0;
}