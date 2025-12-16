class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
 //       #sub optimal solution
    //     for(int i = 0; i<nums.size(); i++){
    //         nums[i] = nums[i] * nums[i];
    //     }
    //     sort(nums.begin(),nums.end());
    //     return nums;
    // }
    int l=0;
    int r = nums.size() - 1;
    vector<int> result;
    while(l<=r){
        if(nums[l]*nums[l] > nums[r]*nums[r]){
            result.push_back(nums[l]*nums[l]);
            l+=1;
        }
        else{
            result.push_back(nums[r]*nums[r]);
            r-=1;
        }   
    }
    reverse(result.begin(),result.end());
    return result;}
};