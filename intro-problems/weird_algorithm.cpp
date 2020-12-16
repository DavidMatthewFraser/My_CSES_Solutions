#include <iostream>

using namespace std;
using ll = int64_t;

/*
  input: a single integer "n"
  loop:
    if n is 1, print n and break
    otherwise print n followed by a space
    if n is even, divide it by 2 
    if n is odd, multiply it by 3 and add 1
 */

/*
  Fun Fact: The Collatz conjecture remains unproved 
  https://en.wikipedia.org/wiki/Collatz_conjecture
 */

int main() {
  ll n;
  cin >> n;
  while(true) {
    if(n == 1) {
      cout << n;
      break;
    }
    cout << n << " ";
    if ( n % 2 == 0) {
      n /= 2;
    } else {
      n = n*3 + 1;
    } 
  }
  return 0;
}
