#include <iostream>
#include <string>
using namespace std;

int main() {

    char str1[] = "Hello, world!"; // 定义字符数组，并赋值字符串
    cout << str1 << endl; // 输出字符串

    string str2 = "Hello, world!!";
    cout << str2 << endl; // 输出字符串
    str2 += "!!!"; // 字符串拼接操作符+=，在字符串末尾添加"!!!"
    cout << str2 << endl;  // 输出字符串 

    system("pause");

    return 0;
}