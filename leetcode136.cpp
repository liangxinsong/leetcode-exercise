class solution{
    int singleNumber(vector<int>& nums){
        int ret;
        for(auto e:nums) ret ^= e;
        return ret;
    }
};
