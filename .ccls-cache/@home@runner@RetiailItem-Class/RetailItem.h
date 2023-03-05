#include <iostream>
using namespace std;
#ifndef RETAILITEM_H
#define RETAILITEM_H
class RetailItem{
  private: 
    string description;
    int unitsOnHand;
    double price;
  public: 
  RetailItem(string description,int unitsOnHand, double price);
  void setDescription(string description );
  void setUnitsOnHand(int unitsOnHand);
  void setPrice(double price);
  string getDescription();
  int getUnitsOnHand();
  int getPrice();

};





#endif