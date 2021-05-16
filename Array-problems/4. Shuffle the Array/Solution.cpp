class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int x = 0, y = n;
	    std::vector<int> arr;
	while(x < n && y< 2*n){
		arr.push_back(nums[x]);
		arr.push_back(nums[y]);
		x++;
		y++;
	}
        return arr;
    }
};
TIME COMPLEXITY: O(n)