class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        int xor_arr = 0;
        for(int i = 0; i < n; i++){
            nums[i] = start + 2 * i;
            xor_arr ^= nums[i];
        }
        return xor_arr;
    }
};
TIME COMPLEXITY: O(n)