#include <algorithm>
#include <vector>
#include <map>
#include <iostream>
int main() {
    std::vector<int> v = {4, 1, 3, 5, 2, 5, 6, 6, 7, 1, 1, 0};
    std::sort(v.begin(), v.end());
    std::map<int, int> mp;
    for (int i : v) {
        mp[i] += 1;
        std::cout << i << " ";
    }

     for (const auto &pair : mp) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}