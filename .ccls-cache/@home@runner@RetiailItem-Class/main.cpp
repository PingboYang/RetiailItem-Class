#include <iostream>
using namespace std;
#include "RetailItem.h"
#include <iomanip>

int main() {
  RetailItem object1("Jacket", 12, 59.95);
  RetailItem object2("Designer Jeans", 40, 34.95);
  RetailItem object3("Shirt", 20, 24.95);

  cout << setw(20) << "Description" << setw(20) << "Units On Hand" << setw(10)
       << "Price" << endl;
  cout << "Item #1" << setw(10) << object1.getDescription() << setw(20)
       << object1.getUnitsOnHand() << setw(10) << object1.getPrice() << endl;
  cout << "Item #2" << setw(17) << object2.getDescription() << setw(13)
       << object2.getUnitsOnHand() << setw(11) << object2.getPrice() << endl;
  cout << "Item #3" << setw(10) << object3.getDescription() << setw(20)
       << object3.getUnitsOnHand() << setw(10) << object3.getPrice() << endl;
  return 0;
}