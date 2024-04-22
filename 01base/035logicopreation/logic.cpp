# include <iostream>

int main() {
    using namespace std;
    int a = 10;
    int b = 10;
    int c = 0;

    cout << "a = " << a << endl; // 输出 10，因为 a 的值为 10。
    cout << "b = " << b << endl; // 输出 10，因为 b 的值为 10。
    cout << "c = " << c << endl; // 输出 0，因为 c 的值为 0。

    cout << "!a = " << !a << endl; // 输出 0，因为 !a 等同于 false，而 false 的值为 0。
    
    cout << "!!a = " << !!a << endl; // 输出 1，因为 !!a 等同于 true，而 true 的值为 1。
    
    cout << "a && b = " << (a && b) << endl; // 输出 1，因为 a 和 b 都为真，所以结果为真，而 true 的值为 1。
    cout << "a || b = " << (a || b) << endl; // 输出 1，因为 a 和 b 都为真，所以结果为真，而 true 的值为 1。

    cout << "a && c = " << (a && c) << endl; // 输出 0，因为 c 为假，所以结果为假，而 false 的值为 0。
    cout << "a || c = " << (a || c) << endl; // 输出 1，因为 a 为真，所以结果为真，而 true 的值为 1。


    system("pause");
    return 0;
}