class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<int>ans;
        for(auto element:freq){
            if(element.second > 2){
                for(int i=1;i<=2;i++){
                    ans.push_back(element.first);
                }
            }
            else{
                for(int i=1;i<=element.second;i++){
                    ans.push_back(element.first);
                }

            }
        }
        sort(ans.begin(),ans.end());

        for(int i=0;i<ans.size();++i){
            nums[i]=ans[i];
        }
        return ans.size();
        
    }
};