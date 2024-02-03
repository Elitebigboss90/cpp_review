class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 2;
        for(int i = 2; i < nums.size(); ++i){
            if(nums[i] != nums[index-2]){
                nums[index] = nums[i];
                index++;
            };
        };
        if(nums.size()>=2){
            return index;
        }
        return index-1 ;
    }  
};
