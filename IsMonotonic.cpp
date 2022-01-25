#include<iostream>
#include<stdlib.h>
#include<string>
#include<cstring>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;


bool isMonotonic(vector<int>& nums) {
	bool flag = false;
	int n = nums.size();
	
	bool artan = false;
	for (int i = 0; i < n - 1; i++) {
		if (nums[i] <= nums[i + 1]) {
			artan = true;
		}
		else {
			artan = false;
			break;
		}
	}
	if (artan) {
		for (int i = 0; i < n - 1; i++) {
			if (!(nums[i] <= nums[i + 1])) {
				return false;
			}
		}
	}
	else {
		for (int i = 0; i < n - 1; i++) {
			if (!(nums[i] >= nums[i + 1])) {
				return false;
			}
		}
	}
	
	return true;
}


int main() {

	vector<int> vec = {1,3,2};
	cout << isMonotonic(vec);
	
	return 0;

}