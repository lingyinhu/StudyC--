#include <iostream>
using namespace std;

int main()
{
    int score = 0; 
    cout << "请输入一个分数：" << endl;
    cin >> score;
    cout << "你输入的成绩是：" << score << endl;

    if (score >= 600) 
    {
        cout << "我考上了一本大学！！！" << endl;
    }
    

    system("pause");
    return 0;
}