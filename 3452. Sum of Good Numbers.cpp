class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int result = 0;
        int length = nums.size();
        for(int i = 0;i<length;i++){
            if((i-k<0 || nums[i] > nums[i-k]) && (i+k>=length || nums[i] > nums[i+k])){
                result+=nums[i];
            }

        }
    return result;
    }
};