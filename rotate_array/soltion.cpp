class Solution {
public:
    // Helper function to reverse elements between left and right indices
    void reverseRange(vector<int>& arr, int left, int right) {
        while (left < right) {
            swap(arr[left++], arr[right--]);
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;  // Normalize k if it's larger than the array size

        // Step 1: Reverse the whole array
        reverseRange(nums, 0, n - 1);
        // Step 2: Reverse the first k elements
        reverseRange(nums, 0, k - 1);
        // Step 3: Reverse the rest
        reverseRange(nums, k, n - 1);
    }
};
