#include <iostream>
using namespace std;
class Student {
private:
string name;
int rollNumber;
int marks[3]; // Array to store marks of three subjects
public:
// Method to set the student's details
void setDetails(string n, int r, int m1, int m2, int m3) {
name = n;
rollNumber = r;
marks[0] = m1;
marks[1] = m2;
marks[2] = m3;
}
// Method to calculate and return total marks
int calculateTotalMarks() {
return marks[0] + marks[1] + marks[2];
}
// Method to display the student's details
void displayDetails() {
cout << "Name: " << name << endl;
cout << "Roll Number: " << rollNumber << endl;
cout << "Marks in Subject 1: " << marks[0] << endl;
cout << "Marks in Subject 2: " << marks[1] << endl;
cout << "Marks in Subject 3: " << marks[2] << endl;
cout << "Total Marks: " << calculateTotalMarks() << endl;
}
};
int main() {
Student student1;
// Setting the student's details
student1.setDetails("Arun", 101, 85, 90, 88);
// Displaying the student's details
student1.displayDetails();
return 0;
}