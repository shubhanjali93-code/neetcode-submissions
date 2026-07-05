class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n =numbers.size();
        vector<pair<int, int>>numsWithIndex;
        for(int i=0; i<n; i++){
            numsWithIndex.push_back({numbers[i],i});
        }
        int left =0, right = numbers.size()-1;
        while(left < right){
            int sum = numsWithIndex[left].first + numsWithIndex[right].first;

            if(sum == target){
                return {numsWithIndex[left].second+1,numsWithIndex[right].second+1};
            }else if(sum < target){
                left++;
            }else{
                right--;
            }
        }
        return {-1, -1};
    }
};
