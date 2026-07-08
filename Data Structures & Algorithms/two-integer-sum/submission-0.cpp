class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>>numsWithInd;
        for(int i =0; i<nums.size();i++){
            numsWithInd.push_back({nums[i],i});
        }
        sort(numsWithInd.begin(), numsWithInd.end());

        int left =0, right=nums.size()-1;
        while(left < right){
            int sum = numsWithInd[left].first + numsWithInd[right].first;
            if(sum == target){
                return {numsWithInd[left].second, numsWithInd[right].second};
            }
            else if(sum < target){
                left++;
            }else{
                right--;
            }
        }
    return {-1, -1};
    }
};
