class Solution {
public:

    int lowerBound(vector<int>& nums, int n, int target){
        int ans = n;
        int l=0, r=n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]>=target){
                ans = min(ans,mid);
                r=mid-1;//left
            }else{
                l=mid+1;//right
            }
        }
        return ans;
    }
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int lw = lowerBound(nums,n,target);
        return lw;
    }
};