int removeElement(vector<int>& nums, int val) {
         int length=nums.size();
         int k=0;
        for(int i=0,j=0;j<length;j++){
            if(nums[j]!=val){
                k++;
                nums[i++]=nums[j];
            }
        }
         return k;
    }