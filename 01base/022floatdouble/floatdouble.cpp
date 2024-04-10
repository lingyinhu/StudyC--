#include <iostream>
using namespace std;

int main() {
    float f1 = 3.14f; // 单精度浮点数，4字节，6-7位有效数字，相对误差7.16%
    double d1 = 3.14; // 双精度浮点数，8字节，15-16位有效数字，相对误差1.5*10^-15%

    cout << f1 << endl; // 输出3.1400000000000001
    cout << d1 << endl; // 输出3.1400000000000001    

    cout << "sizeof(float) = " << sizeof(f1) << endl; // 输出4，即4字节
    cout << "sizeof(double) = " << sizeof(d1) << endl; // 输出8，即8字节

    float f2 = 1e30; // 1*10^30，单精度浮点数只能表示6-7位有效数字，所以结果是inf（无限大）
    cout << "f2 = " << f2 << endl; // 输出inf，即无限大

    float f3 = 3e-20; // 3*10^-20，单精度浮点数只能表示6-7位有效数字，所以结果是0.00000000000000000000
    cout << "f3 = " << f3 << endl; // 输出0.00000000000000000000

    system("pause");
    
    return 0;
}