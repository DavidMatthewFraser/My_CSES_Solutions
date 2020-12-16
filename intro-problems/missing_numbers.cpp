#include <iostream>
#include <unordered_set>

using namespace std;

// input: integer "n" e.g 5
// n-1 numbers between 1 and n e.g 1, 2, 3, 5
// find the missing number, here 4

// brute force method : add numbers to a vector; (n)
// for each number between 1 and n, does that number exist in the vector (n^2)

// better solution
// add each between 1 and 5 to an unordered set (n)
// each time we input a number, remove it from the unordered set (n)*(1)
// print the remaining number for the unordered set




int main() {
  int n, a; 
  unordered_set<int> numbers;
  cin >> n;
  for(int i=1; i<=n; i++) {
    numbers.insert(i);
  }
  for(int i=1; i<n; i++) {
    cin >> a;
    numbers.erase(a);
  }
  for(int i : numbers) 
    cout << i;
  return 0;
}
