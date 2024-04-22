#include <iostream>

int main() {
    using namespace std;
    
    int score = 0;
    cout << "请输入分数：(0到100)" << endl; // 提示用户输入分数
    cin >> score; // 读取用户输入的分数

    char grade = ' '; // 初始化等级为空字符
    
    // 使用if-else语句根据分数确定等级
    if (score >= 90) { // 如果分数大于等于90分，等级为A
        grade = 'A';
    } else if (score >= 80) { // 如果分数大于等于80分，等级为B
        grade = 'B';
    } else if (score >= 70) { // 如果分数大于等于70分，等级为C
        grade = 'C';
    } else if (score >= 60) { // 如果分数大于等于60分，等级为D
        grade = 'D';
    } else { // 如果分数小于60分，等级为E
        grade = 'E';
    }

    cout << "等级为：" << grade << endl; // 输出等级
    
    // 输出结果


    system("pause");
    return 0;
}