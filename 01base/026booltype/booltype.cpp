#include <iostream>
using namespace std;

int main() {
    
    bool flag = true; // 初始化为true，即真值，默认值为false，即假值。
    cout << flag << endl; // 输出1，因为true被转换为整数1。

    flag = false; // 修改为false，即假值。
    cout << flag << endl; // 输出0，因为false被转换为整数0。

    cout << "size of bool = " << sizeof(bool) << endl; // 输出1，因为bool类型占用1字节内存。

    system("pause");

    return 0;
}