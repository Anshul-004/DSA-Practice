class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int, int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        int k;
        for(auto i: m)
        {
            if(i.second == 1)
                k = i.first;
        }
        return k;
    }
};