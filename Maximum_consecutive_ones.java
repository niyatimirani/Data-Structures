class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int maxi = 0;  // final answer
        int count = 0; // current streak of 1s
        
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 1) {
                count++;                  // extend current streak
                maxi = Math.max(maxi, count); 
            } else {
                count = 0;                // reset streak
            }
        }
        
        return maxi;
    }
}

class Maximum_consecutive_ones{
    public static void main(String args[])
    {
        Solution s = new Solution();
        int nums = {1 , 1, 1, 0, 0, 1,0, 0, 1 , 1,1,1,1,1,1,1,1,1,1};
        s.findMaxConsecutiveOnes(nums);
    }
}
