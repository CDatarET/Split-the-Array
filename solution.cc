class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            if(map.contains(nums[i])) map[nums[i]]++;
            else map[nums[i]] = 1;

            if(map[nums[i]] == 3) return false;
        }

        return true;
    }
};
