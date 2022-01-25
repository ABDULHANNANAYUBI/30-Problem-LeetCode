#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<cstring>
#include<vector>
#include<algorithm>
#include<stdio.h>

using namespace std;
int RemoveDuplicate(vector<int> vec) {

	auto end = vec.end();
	for (auto it = vec.begin(); it != end; ++it) {
		end = remove(it + 1, end, *it);
	}

	vec.erase(end, vec.end());
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
	return vec.size();
	
}

int main() {
	
	vector<int> vec = { 0,0,1,1,1,2,2,3,3,4 };
	cout << RemoveDuplicate(vec);

	return 0;
}

