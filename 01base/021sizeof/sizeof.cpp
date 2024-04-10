#include <iostream>
using namespace std;

int main() {
    cout << "Size of char: " << sizeof(char) << endl; // 输出char类型的大小，通常是1个字节（8位）
    cout << "Size of short: " << sizeof(short) << endl; // 输出short类型的大小，通常是2个字节（16位）或4个字节（32位）
    cout << "Size of int: " << sizeof(int) << endl; // 输出int类型的大小，通常是4个字节（32位）
    cout << "Size of long: " << sizeof(long) << endl; // 输出long类型的大小，通常是4个字节（32位）或8个字节（64位）
    cout << "Size of long long: " << sizeof(long long) << endl; // 输出long long类型的大小，通常是8个字节（64位）
    system("pause");
    return 0;
}
