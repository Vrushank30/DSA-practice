class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int i=0,k=0,n=nums.size();
            for(int j=1;j<n;j++){
                if(nums[i]!=nums[j]){
                    nums[i+1]=nums[j];
                    i++;
                }
            }
            k=i+1;
            return k;
            
        }
    };