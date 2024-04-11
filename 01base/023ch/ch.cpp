#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    cout << ch << endl; // 输出字符A
    cout << (int)ch << endl; // 输出字符A的ASCII码值41
    cout << sizeof(ch) << endl; // 输出字符的存储大小1字节

    ch = 65; // 将ASCII码值65赋给字符变量ch
    cout << ch << endl; // 输出字符A

    system("pause");

    return 0;
}