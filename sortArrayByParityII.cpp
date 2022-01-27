vector<int> sortArrayByParityII(vector<int>& nums) {
		vector<int> even, odd, res;
		int i = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] % 2 == 0) {
				even.push_back(nums[i]);
			}
			else {
				odd.push_back(nums[i]);
			}
		}
	
		int evenSize = even.size();
		int oddSize = odd.size();
		int j = 0, k = 0;
	
		while (evenSize != 0 || oddSize != 0) {
			res.push_back(even[j]);
			j++, evenSize--;
			res.push_back(odd[k]);
			k++;
			oddSize--;
		}
	
		for (int i = 0; i < res.size(); i++)
			cout << res[i];
		return res;

}