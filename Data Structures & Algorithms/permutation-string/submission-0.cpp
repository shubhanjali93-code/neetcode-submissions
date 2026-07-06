class Solution {
public:

    bool freqCheck(int freq1[], int freq2[]){
        for(int i =0; i<26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        int freq[26] ={0};
        int windFreq[26] ={0};

        int windSize = s1.size();
        for(int i =0; i<s1.size(); i++){
            freq[s1[i] -'a']++;
        }
        for(int i=0;i<windSize; i++){
            windFreq[s2[i]-'a']++;
        }
        for(int i=windSize; i< s2.size(); i++){
            if(freqCheck(freq, windFreq)) return true;
            windFreq[s2[i]-'a']++;
            windFreq[s2[i-windSize]-'a']--;
        }
        return freqCheck(freq,windFreq);
    }
};
