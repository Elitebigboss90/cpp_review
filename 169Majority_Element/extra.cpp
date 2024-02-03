class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int key = 0;
        int counter = 0;
        for(auto& element:nums){
            if(counter == 0){
                key = element;
                counter += 1;
            }else if(key == element){
                counter += 1;
            }else{
                counter -= 1;
            }
        }
        return key;
    }
};