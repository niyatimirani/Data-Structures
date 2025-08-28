import java.util.*;

class Solution {
    public int maximumProduct(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        
        int option1 = nums[n-1] * nums[n-2] * nums[n-3];     // top 3 largest
        int option2 = nums[0] * nums[1] * nums[n-1];         // 2 smallest + largest
        
        return Math.max(option1, option2);
    }
}


class maximum_triplet_product{

    public static void main(String args[])
    {
        Solution s = new Solution();
        int nums[] = {12,34,22,11,33,45,22,1,1,0};
        int ans = s.maximumProduct(nums);
        System.out.println(ans);
    }
}