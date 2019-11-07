#include <iostream>
#include "listaduplamenteligada.h"
#include "pilha.h"
using namespace std;

int main() {
  Pilha<int> A;
  
  int vetor[] = {6,8,12,7,2,4,3};
  
  cout << "Pilha" << endl; 
  for(int i = 0; i < 7; i++){
    A.empilha(vetor[i]);
  }
  // A.empilha("9");
  // A.empilha("10");
  // A.empilha("*");
  A.mostra();
  cout << endl;
  cout << "\nDesempilha()" << endl;
  for(int i = 0; i < 7; i++){
    cout << A.topo() << " ";
    A.desempilha();
  }

  }