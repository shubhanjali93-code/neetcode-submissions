class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26, 0);
        int l=0, r=0, maxCount=0, maxLen=0;
        int n = s.size();
        while(r < n){
            freq[s[r]-'A']++;
            maxCount = max(maxCount, freq[s[r]-'A']);
            while((r-l+1) - maxCount >k){
                freq[s[r]-'A']--;
                l++;
            }
            maxLen = max(maxLen, r-l+1);
            r++;
        }
        return maxLen;
    }
};
