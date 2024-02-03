class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::map<int, int> resultMap;

        for (auto & element : nums) {
            std::cout << element << std::endl;
            resultMap[element] += 1;
        }
        int maxKey = resultMap.empty() ? 0 : resultMap.begin()->first;
        int maxValue = resultMap.empty() ? std::numeric_limits<int>::min() : resultMap.begin()->second;

        for (const auto& pair : resultMap) {
            if (pair.second > maxValue) {
                maxValue = pair.second;
                maxKey = pair.first;
            }
        }
        return maxKey;
    }
};