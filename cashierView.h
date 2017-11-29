#ifndef _CASHIERVIEW_H_
#define _CASHIERVIEW_H_
#include "order.h"
#include "ObserverPattern.cpp"

class cashierView: public IObserver
{
  public:
    cashierView()
    {
       current.addObserver(this);
    }
    void displayRunningTotal(order running);
    void displayFinalReceipt(order final);
    void update()
    {
      displayRunningTotal(order.getSubtotal());
      displayRunningTotal(order.getTotal());
    }
};

#endif