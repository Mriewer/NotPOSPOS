#ifndef _CUSTOMERVIEW_H_
#define _CUSTOMERVIEW_H_
#include "order.h"
#include "ObserverPattern.cpp"

class customerView: public IObserver
{
  public:
    customerView()
    {
       current.addObserver(this);
    }
    void refresh(order running);
    void update()
    {
      refresh(order.getSubtotal());
    }
};

#endif