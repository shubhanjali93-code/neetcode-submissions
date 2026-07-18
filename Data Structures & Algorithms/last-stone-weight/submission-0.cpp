class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> minHeap;
        for(int i:stones){
            minHeap.push(i);
        }
        while(minHeap.size() >1){
            int first=minHeap.top();
            minHeap.pop();
            int second=minHeap.top();
            minHeap.pop();
            if(second<first){
                minHeap.push(first-second);
            }
            
        }
        minHeap.push(0);
        return minHeap.top();
    }
};
