#include <iostream>
#include <string>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
};

int main() {
    int a = 10;
    int b = 20;
    int *pointerToA = &a;
    int *pointerToB = &b;
    int &referenceToA = a;
    int &referenceToB = b;

    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value via pointer: " << pointerToA << std::endl;
    std::cout << "Value via reference: " << referenceToA << std::endl;
    
    swap(pointerToA, pointerToB);
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of b: " << b << std::endl;
    return 0;
};