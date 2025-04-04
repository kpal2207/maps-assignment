class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int>u;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            auto it=u.find(target-nums[i]);
            if(it!= u.end()){
                v.push_back(i);
                v.push_back(it->second);
                break;
            }
            u[nums[i]]=i;

        }
        return v;
    }
};