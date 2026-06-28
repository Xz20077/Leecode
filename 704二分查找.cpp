class Solution {
public:
    int searched(vector<int> nums,int left,int right,int target){
        if(left<=right){
            int mid=(right+left)/2;
            if(target<nums[mid]){
                return searched(nums,left,mid-1,target);
            }
            else if(target>nums[mid]){
                return searched(nums,mid+1,right,target);
            }
            else return mid;
        }
        else return -1;
    }
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        return searched(nums,left,right,target);
    }
};