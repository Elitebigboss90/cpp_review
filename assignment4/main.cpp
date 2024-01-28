#include <iostream>
#include <string>
#include <array>

void fillout(int *x,int size){
   std::cout << "length"<<length << std::endl;
   for (int i = 0; i < size; i++) {
    x[i] = i;
    }
};

int main() {
    int *arr = new int[5];
    fillout(arr, 5);
    for (int i =0; i<5;i++) {
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}