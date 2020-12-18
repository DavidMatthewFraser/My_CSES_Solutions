#include <iostream>
#include <set>

using namespace std;

// input:
// an integer
// a line of integers
// output:
// number of distinct values

int main() {
	int nums, n;
	set<int> s;
	cin >> nums;
	for (int i=0; i<nums; i++) {
		cin >> n;
		s.insert(n);
	}
	cout << s.size();
}
