#include <iostream>

int main()
{
    using namespace std;
    int a = 10;
    int b = 20;
    cout << boolalpha; // 设置输出布尔值时显示 true 和 false
    cout << "a = " << a << ", b = " << b << endl; // 输出 a 和 b 的值
    cout << "a < b is " << (a < b) << endl; // 输出 1，因为 a 小于 b
    cout << "a > b is " << (a > b) << endl; // 输出 0，因为 a 不大于 b
    cout << "a <= b is " << (a <= b) << endl; // 输出 1，因为 a 小于等于 b
    cout << "a >= b is " << (a >= b) << endl; // 输出 0，因为 a 不大于等于 b
    cout << "a == b is " << (a == b) << endl; // 输出 0，因为 a 不等于 b
    cout << "a != b is " << (a != b) << endl; // 输出 1，因为 a 不等于 b

    system("pause");

    return 0;
    
}