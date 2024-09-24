#include <iostream>
using namespace std;
int main() {
// Distances climbed by the monkeys
int chimpHeight = 30; // Height climbed by Chimp
int bonzoHeight = 25; // Height climbed by Bonzo
// Compare the heights and output the result
if (chimpHeight > bonzoHeight) {
cout << "Chimp is ahead of Bonzo." << endl;
} else if (chimpHeight < bonzoHeight) {
cout << "Bonzo is ahead of Chimp." << endl;
} else {
cout << "Both Chimp and Bonzo are at the same height." << endl;
}
return 0;
}