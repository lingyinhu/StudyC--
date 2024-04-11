#include <iostream>
using namespace std;
int main()
{
    //整型输入
    int a = 0;
    cout << "请输入一个整数：" << endl; 
    cin >> a; // 输入一个整数并赋值给变量a。
    cout << "您输入的整数是：" << a << endl; // 输出变量a的值。

    //浮点型输入
    double b = 0.0; // 定义一个浮点型变量b，并初始化为0.0。 
    cout << "请输入一个浮点数：" << endl; 
    cin >> b; // 输入一个浮点数并赋值给变量b。 
    cout << "您输入的浮点数是：" << b << endl; // 输出变量b的值。

    //字符型输入
    char c = '\0'; // 定义一个字符型变量c，并初始化为空字符。
    cout << "请输入一个字符：" << endl; 
    cin >> c; // 输入一个字符并赋值给变量c。 
    cout << "您输入的字符是：" << c << endl; // 输出变量c的值。

    //字符串输入（使用string类）
    string d = ""; // 定义一个字符串变量d，并初始化为空字符串。 
    cout << "请输入一个字符串：" << endl;
    cin >> d; // 输入一个字符串并赋值给变量d。 
    cout << "您输入的字符串是：" << d << endl; // 输出变量d的值。

    //boolean型输入（使用bool类）
    bool e = false; // 定义一个布尔型变量e，并初始化为false。 
    cout << "请输入一个布尔值（true或false）：" << endl;
    cin >> e; // 输入一个布尔值并赋值给变量e。 
    cout << "您输入的布尔值是：" << e << endl; // 输出变量e的值。

    system("pause"); // 暂停程序，等待用户输入任意键继续执行程序，Windows系统下有效。
    return 0;
}