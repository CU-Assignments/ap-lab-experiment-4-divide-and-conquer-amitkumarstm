class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0]; // Initialize max_sum with the first element
        int current_sum = 0;

        for (int num : nums) {
            if (current_sum < 0) current_sum = 0; // Reset sum if it goes negative
            current_sum += num;
            max_sum = max(max_sum, current_sum);
        }
        return max_sum;
    }
};
