#include <iostream>
#include <vector>
#include <algorithm> // For lower_bound

using namespace std;

int lengthOfLIS(vector<int>& nums) {
    vector<int> tails;
    for (int x : nums) {
        auto it = lower_bound(tails.begin(), tails.end(), x); // Find the first element >= x
        std::cout << "it :" << tails.end() << std::endl;
        if (it == tails.end()) {
            tails.push_back(x); // x extends largest subsequence
        } else {
            *it = x; // Update the tail of the subsequence of length it - tails.begin() + 1
        }
    }
    return tails.size(); 

int main() {
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    cout << "Length of LIS: " << lengthOfLIS(nums) << endl;
    return 0;
}