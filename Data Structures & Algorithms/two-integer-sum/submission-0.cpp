class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        
        unordered_map<int , int > mp;
        for ( int i= 0 ;i < num.size();i++){
            int diff = target - num[i];
            if ( mp.find(diff) != mp.end() ){
            return {mp[diff],i };
            }

         mp[num[i]]=i;
        }
    return {};
    }
};
