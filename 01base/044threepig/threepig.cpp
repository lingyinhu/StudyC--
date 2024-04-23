#include<iostream>

int main()

{
    using namespace std;
    double w1,w2,w3;
    cout << "请输入第一只小猪的重量："<<endl;
    cin >> w1;
    cout << "请输入第二只小猪的重量："<<endl;
    cin >> w2;
    cout << "请输入第三只小猪的重量："<<endl;
    cin >> w3;

    ((w1 > w2)&&(w1 > w3))? cout << "第一只小猪最重" : ((w2 > w1)&&(w2 > w3))? cout << "第二只小猪最重" : cout << "第三只小猪最重";
    

    system("pause");
    return 0;
}
