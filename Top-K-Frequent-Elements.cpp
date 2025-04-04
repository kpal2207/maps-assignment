class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> u;
        for(int i=0;i<nums.size();i++){
            u[nums[i]]++;
        }
        multimap <int,int, greater<int>> m;
        for(auto it=u.begin();it!=u.end();it++)
        {
            m.insert({it->second,it->first});
        }
        vector<int> v;
        auto it=m.begin();
        while(k--){
            v.push_back(it->second);
            it++;
        }
        return v;
    }
};