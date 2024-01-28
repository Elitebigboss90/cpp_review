#include <vector>
#include <iostream>

auto simpleLambda = [](const std::vector<int>& vec) {
    std::cout << "Hello from Lambda! ";
    for (auto elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
};

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    for (auto i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    simpleLambda(v);
    return 0;
}
