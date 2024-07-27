class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        if(n == 1) return 0;

        int mid1 = nums[n/2];
        int add1 = 0;

        for(int i=0;i<n;i++){
            add1 += abs(mid1 - nums[i]);
        }

        return add1;
    }
};