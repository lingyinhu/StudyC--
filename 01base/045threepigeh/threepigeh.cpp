#include<iostream>
#include<algorithm>
#include<vector>


int main()
{
    using namespace std;

    int numPigs;
    std::cout << "请输入小猪的数量：";
    std::cin >> numPigs;

    std::vector<double> weights(numPigs);

    // 输入每只小猪的体重
    for (int i = 0; i < numPigs; ++i) {
        std::cout << "请输入小猪" << char('A' + i) << "的体重：";
        std::cin >> weights[i];
    }

    // 找出最重的小猪
    double maxWeight = *std::max_element(weights.begin(), weights.end());
    std::vector<char> heaviestPigs;
    for (int i = 0; i < numPigs; ++i) {
        if (weights[i] == maxWeight) {
            heaviestPigs.push_back('A' + i);
        }
    }

    // 输出最重的小猪
    if (heaviestPigs.size() == 1) {
        std::cout << "小猪" << heaviestPigs[0] << "最重。\n";
    } else {
        std::cout << "最重的小猪是：";
        for (char pig : heaviestPigs) {
            std::cout << "小猪" << pig << " ";
        }
        std::cout << "，它们的体重相同。\n";
    }


    

    system("pause");
    return 0;
}
