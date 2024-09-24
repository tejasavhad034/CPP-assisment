#include <iostream>

using namespace std;

int main() {
// Distances covered by John and Rahul (in kilometers)
float johnDistance = 5.4;
float rahulDistance = 5.4;
// Comparison: Equal to (==)
if (johnDistance == rahulDistance) {
cout << "John and Rahul have covered the same distance." <<
endl;
} else {
cout << "John and Rahul have not covered the same distance." <<
endl;
}
// Comparison: Not equal to (!=)
if (johnDistance != rahulDistance) {
cout << "John and Rahul are at different distances." << endl;
} else {
cout << "John and Rahul are at the same distance." << endl;
}
// Comparison: Greater than (>)
if (johnDistance > rahulDistance) {
cout << "John is ahead of Rahul." << endl;} else {
cout << "John is not ahead of Rahul." << endl;
}
// Comparison: Less than (<)
if (johnDistance < rahulDistance) {
cout << "John is behind Rahul." << endl;
} else {
cout << "John is not behind Rahul." << endl;
}
// Comparison: Greater than or equal to (>=)
if (johnDistance >= rahulDistance) {
cout << "John has covered at least as much distance as Rahul."
<< endl;
} else {
cout << "John has not covered as much distance as Rahul." <<
endl;
}
// Comparison: Less than or equal to (<=)
if (johnDistance <= rahulDistance) {
cout << "John has covered no more distance than Rahul." << endl;
} else {
cout << "John has covered more distance than Rahul." << endl;
}
return 0;
}