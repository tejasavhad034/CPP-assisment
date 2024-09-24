include <iostream>
using namespace std;
int main() {
// Variables to store input values
int numberOfItemsSold;
double pricePerItem, totalRevenue, totalCost, profit,
averageSalesPerDay, percentageProfit;
int numberOfDays;
// Input for total revenue calculation
cout << "Enter the number of items sold: ";
cin >> numberOfItemsSold;
cout << "Enter the price per item: ";
cin >> pricePerItem;
// Calculate total revenue
totalRevenue = numberOfItemsSold * pricePerItem;
cout << "Total Revenue: " << totalRevenue << " Rs." << endl;
// Input for profit calculation
cout << "Enter the total cost: ";
cin >> totalCost;
// Calculate profit
profit = totalRevenue - totalCost;
cout << "Profit: " << profit << " Rs." << endl;
// Input for average sales calculation
cout << "Enter the number of days the shop was open: ";
cin >> numberOfDays;
// Calculate average sales per day
if (numberOfDays != 0) {
averageSalesPerDay = totalRevenue / numberOfDays;
cout << "Average Sales per Day: " << averageSalesPerDay << "
Rs." << endl;
else {
cout << "Error: Number of days cannot be zero when calculating average
sales." << endl;
}
// Calculate percentage profit
if (totalCost != 0) {
percentageProfit = (profit / totalCost) * 100;
cout << "Percentage Profit: " << percentageProfit << "%" <<
endl;
} else {
cout << "Error: Total cost cannot be zero when calculating
percentage profit." << endl;
}
return 0;

}