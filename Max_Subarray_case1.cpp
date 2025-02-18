class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN; // Initialize max_sum to smallest possible value
        int current_sum = 0;

        for (int num : nums) {
            current_sum += num;
            max_sum = max(max_sum, current_sum);
            
            // If current_sum is negative, reset it to 0
            if (current_sum < 0) {
                current_sum = 0;
            }
        }
        return max_sum;
    }
};
