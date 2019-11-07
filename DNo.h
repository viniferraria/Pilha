#ifndef DNO_H
#define DNO_H
#include "listaduplamenteligada.h"

template <typename E>
class DNo{
  private: 
    E elem;
    DNo<E>* prox;
    DNo<E>* prev;
   template <typename U> friend class Listaduplamenteligada;
};

#endif