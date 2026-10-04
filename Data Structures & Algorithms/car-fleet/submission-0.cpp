
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for(int i = 0; i < position.size(); i++){
            cars.push_back({position[i] , speed[i]});
        }

        sort(cars.rbegin(), cars.rend());

        double slowesttimeahead = 0;
        int fleet = 0;

        for (auto it : cars ){
            double timetotarget = (double)(target - it.first) / (it.second);
            if(timetotarget > slowesttimeahead){
                fleet++;
                slowesttimeahead = timetotarget;
            }
        }

        return fleet;


        
    }
};
