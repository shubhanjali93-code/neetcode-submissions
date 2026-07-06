class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,int>>cars;
        for(int i=0; i<n; i++){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());

        int fleets=1;
        double prev = (double)(target - cars[0].first)/cars[0].second;

        for(int i=1; i<n; i++){
            double curr = (double)(target- cars[i].first)/cars[i].second;

            if(curr > prev){
                fleets++;
                prev =curr;
            }
        }
        return fleets;
    }
};
