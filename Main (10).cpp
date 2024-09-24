#include <iostream>

#include <string>

#include <algorithm> // For transform
using namespace std;
int main() {
// Declare variables to hold the first name, last name, and username
string firstName;
string lastName;
string username;
// Prompt the user for their first name
cout << "Enter your first name: ";
cin >> firstName;
// Prompt the user for their last name
cout << "Enter your last name: ";
cin >> lastName;
// Concatenate first name and last name to create the username
username = firstName + lastName;
// Convert the username to lowercase
transform(username.begin(), username.end(), username.begin(),
tolower);
// Display the generated username
cout << "Generated Username: " << username << endl;
return 0;
