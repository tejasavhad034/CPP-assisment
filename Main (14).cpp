#include <iostream>
using namespace std;
int main() {
// Variable to store the day of the week as an integer
int day;
// Prompt the user to enter a day of the week (1-7)
cout << "Enter a number (1-7) to select a day of the week: ";
cin >> day;
// Using a switch statement to display the corresponding breakfast
item
switch (day) {
case 1:
cout << "Monday's breakfast is Poha." << endl;
break;
case 2:
cout << "Tuesday's breakfast is Upma." << endl;
break;
case 3:
cout << "Wednesday's breakfast is Dosa." << endl;
break;
case 4:
cout << "Thursday's breakfast is Idli." << endl;
break;
case 5:
cout << "Friday's breakfast is Kachori." << endl;
break;
case 6:
cout << "Saturday's breakfast is Samosa." << endl;
break;
case 7:
cout << "Sunday's breakfast is Bread Pakoda." << endl;
break;
default:

cout << "Invalid input! Please enter a number between 1 and

7." << endl;
}
return 0;