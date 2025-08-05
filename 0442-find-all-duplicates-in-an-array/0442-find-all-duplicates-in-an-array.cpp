class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>freq;
        for(int num : nums){
            freq[num]++;
        }
        vector<int>q;
        for(auto element : freq){
            if(element.second>=2){
           q.push_back(element.first);
            }
        }
        return q;
    }
};