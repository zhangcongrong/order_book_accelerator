#include <iostream>
#include <map>

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::map<float, int> myMap;
    if (myMap.begin() != myMap.end()) {
        std::cout << "111:" <<  myMap.begin()->first << myMap.rbegin()->first << std::endl;
    }


    // 插入键值对
    myMap[12.3] = 1;
    myMap[123] = 2;
    myMap[1.23] = 3;

    // 遍历并输出键值对
    for (const auto& pair : myMap) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }

    auto amount_it = myMap.find(0.123);
    auto price_it = myMap.find(1.23);
    if (price_it != myMap.end() && amount_it != myMap.end()) {
        std::cout << price_it->second << amount_it->second << std::endl;
    }

    return 0;
}
