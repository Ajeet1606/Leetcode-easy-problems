class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin(), candies.end());
	std::vector<bool> v;
	for(int i : candies){
		if (i + extraCandies >= max)
		{
			v.push_back(true);
		}
		else
			v.push_back(false);

	}
        return v;
        
    }
};

