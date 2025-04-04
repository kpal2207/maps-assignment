class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
        int maxi=0;int count=1;int prev;int j=0;
        for(auto it:m){
     
        if(j>0 && it.first-prev==1) count++;
        else count=1;
        prev =it.first;
        maxi=max(count,maxi);
        j++;
     }
    return maxi;
    }
};