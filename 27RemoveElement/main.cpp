class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i < nums.size(); ++i){
            std::cout << i << " " <<index << std::endl;
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    };

};