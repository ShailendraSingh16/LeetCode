class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {

        long long ans=0;
        long long sum=0;

        for(int i=nums.size()-1;i>=0;i--){

            if(nums[i]>sum){
                sum=0;
            }

            sum+=nums[i];
            ans=max(ans,sum);
        }
        return ans;
    }
};
