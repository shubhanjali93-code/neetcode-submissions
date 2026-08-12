class Solution {
    public:
        int rob(vector<int>& nums) {
                return dfs(nums, 0);
                    }

                        int dfs(vector<int>& nums, int index) {
                                if (index >= nums.size())
                                            return 0;

                                                    int skip = dfs(nums, index + 1);
                                                            int take = nums[index] + dfs(nums, index + 2);

                                                                    return max(skip, take);
                                                                        }
                                                                        };
