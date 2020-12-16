#include <iostream>
#include <string>

using namespace std;

// input: array of chars e.g 'a' 'a' 'c' 'c' 'c'
// find the larget repetition e.g 'c' 'c' 'c'
// output the size of the largets repitition

// cin string
// for each char, if it is equal to the previous char, increase largest repetition
// otherwise reset largest repitition to 1

int main() {
  string dna;
  cin >> dna;
  int largest = 1;
  int current = 1;
  char previous = dna.at(0);
  for(int i=1; i<dna.size(); i++) {
    if(dna.at(i) == previous) {
      current++;
    } else { 
      previous = dna.at(i);
      if (current > largest) { largest = current; }
      current = 1;
    }
  }
  if (current > largest) { largest = current; }
  cout << largest;
  return 0;
}
