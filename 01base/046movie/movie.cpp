#include <iostream>
int main()
{
    using namespace std; 
    int score=0;
    cout << "请给电影打分（0-10分）：" << endl;
    cin >> score;
    switch(score)
    {
        case 10:
        case 9:
            cout << "经典" << endl;
            break; 
        case 8: 
            cout << "非常好" << endl; break;
        case 7: 
        case 6: 
            cout << "一般" << endl; break;
        default: 
            cout << "烂片" << endl; break;       
    }
    system("pause");
    return 0;
}