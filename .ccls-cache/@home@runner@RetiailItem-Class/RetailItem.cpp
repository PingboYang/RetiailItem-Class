#include <iostream>
using namespace std;
#include "RetailItem.h"
RetailItem::RetailItem(string description,int unitsOnHand, double price){
  this->description=description;
  this->unitsOnHand=unitsOnHand;
  this->price=price;
}
string RetailItem:: getDescription(){
  return description;
}
int RetailItem:: getUnitsOnHand(){
  return unitsOnHand;
}
int RetailItem:: getPrice(){
  return price;
}
void RetailItem:: setDescription(string description ){
  this->description=description;
}
  void RetailItem:: setUnitsOnHand(int unitsOnHand){
    this->unitsOnHand=unitsOnHand;
  }
  void RetailItem:: setPrice(double price){
    this->price=price;
  }












