#include <iostream>

int main() {
    
    using namespace std;

    int i = 100;
    do
    {
        int a = i / 100; // 百位数字
        int b = i % 100 / 10; // 十位数字
        int c = i % 10; // 个位数字
        if (a * a * a + b * b * b + c * c * c == i) // 判断是否为水仙花数
        {
            cout << i << endl; // 输出水仙花数
        }
        i++;
    } while (i<1000);
    

    system("pause");
    return 0;
}