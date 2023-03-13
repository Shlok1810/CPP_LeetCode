https://leetcode.com/problems/single-number/description/


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(auto a:nums)ans = ans^a;  //XOR Operation
        return ans;

        /*
            In XOR Operation, 
            we have make numbers into binary and then if its same number then output will
            0, and rest will one,

            [2,2,1] = [10,10,01]
            10-10 = 0
            01 = 1 
            output!!!   
      */
    }
};
