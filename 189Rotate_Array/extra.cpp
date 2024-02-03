class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int numsLen = nums.size();
        k = k % numsLen;
        int count = 0;
        
        for (int start = 0; count < numsLen; start++) {
            int current = start;
            int prev = nums[start];
            do {
                int next = (current + k) % numsLen;
                int temp = nums[next];
                nums[next] = prev;
                prev = temp;
                current = next;
                count++;
            } while (start != current);
        }
    }
};