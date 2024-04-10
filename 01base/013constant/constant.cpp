#define day 7
#include <iostream>
using namespace std;

int main() {
    cout << "一周里总共有 " << day << " 天" << endl; // 输出常量值
    // day = 8; // 编译错误，常量不能被修改
    const int month = 12; // 定义常量month，并初始化为12
    cout << "一年里总共有 " << month << " 个月。" << endl; // 输出常量值month的值，为12ay << " days in a week, " << month << " months in a year." << endl; // 输出常量值
    // month = 13; // 编译错误，常量不能被修改
    system("pause");// 暂停程序运行，以查看输出
    return 0;
}