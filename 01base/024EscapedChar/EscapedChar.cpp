#include <iostream>
using namespace std;

int main() {
    cout << "\\" << endl; // 输出反斜杠字符 
    cout << "\"" << endl; // 输出双引号字符 "
    cout << "\a" << endl; // 输出警告音
    cout << "\n" << endl; // 输出换行符，并换行
    cout << "\thello" << endl; // 输出制表符，并换行 
    cout << "\bhello" << endl; // 输出退格符，并换行（在某些编译器中可能无效）

    system("pause");

    return 0;
}