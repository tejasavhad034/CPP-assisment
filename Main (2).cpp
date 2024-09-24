#include <iostream>
using namespace std;

int main()
{
  // No. of notebooks and pen
    int notebooks = 15;
    int pens = 20;
    //No.of costs per notebook and per pen
    double costPerNotebook = 2.25;
    double costPerPen = 0.75;
    //Adding both total costs

    double totalCost = (notebooks * costPerNotebook) + (pens * costPerPen);

    cout << "Total cost of the supplies: Rs. " << totalCost << endl;

    return 0;
}