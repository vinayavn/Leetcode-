class Solution {
public:
    int maxArea(vector<int>& height) {
        int l =0;
        int r = height.size() - 1;
        int res = 0;
        while(l!=r){
            int area = min(height[l],height[r]) * (r-l);
            res = max(area,res);
            if(height[l]>height[r]){
                r-=1;
            }
            else{
                l+=1;
            }

        }
        return res;
    }
};