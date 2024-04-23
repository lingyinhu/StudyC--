#include <iostream>

int main() {
    using namespace std;
    int score = 0; // 初始化分数为0
    
    cout << "请输入考试成绩(0~750):"<<endl;

    cin >> score;

    if (score>600)
    {
        cout << "我考上了一本大学！" << endl;
        if (score>700)
        {
            cout << "我考上了北大"<<endl;
        }
        else if (score>650)
        {
            cout << "我考上了清华"<<endl;            
        }
        else 
        {
            cout << "我考上了人大"<<endl;            
        }
    }
    else if (score>500) // 注意：else if语句中的条件是独立的，所以即使score>600为假，score>500仍然会被检查。
    {
        cout << "我考上了一个二本大学！" << endl;        
    }
    else if (score>400) // 注意：else if语句中的条件是独立的，所以即使score>500为假，score>400仍然会被检查。
    {
        cout << "我考上了一个三本大学！" << endl;        
    }
    else
    {
        cout << "我未考上本科" << endl;
    }

    system("pause");
    return 0;
}