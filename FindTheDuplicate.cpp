class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>a;
        for(int i=0;i<nums.size();i++){
            a.insert(nums[i]);
                    }

        for(int i=0;i<nums.size();i++){
            if(a.find(nums[i])!=a.end()){
                a.erase(nums[i]);
            }
            else{
                return nums[i];
            }
        }
        return 0;
    }
};
