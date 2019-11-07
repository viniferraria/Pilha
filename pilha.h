#ifndef	PILHA_H
#define	PILHA_H
#include "listaduplamenteligada.h"
#include <stdlib.h>
#include <string>
using namespace std;

template	<typename	E>
class	Pilha{
		private:
				Listaduplamenteligada<E>*	p;
		public:
				Pilha();
				~Pilha();
				bool	vazia();
				void	empilha(const	E&	e);
				const	E&	topo()	const;
				void	desempilha();
        void mostra();
        void soma();
        void sub();
        void multi();
        void div();
};

template	<typename	E>
Pilha<E>::Pilha(){
p = new Listaduplamenteligada<E>;
}

template	<typename	E>
Pilha<E>::~Pilha(){
  delete p;
}

template	<typename	E>
bool	Pilha<E>::vazia(){
  return p->vazia();
}

template	<typename	E>
void	Pilha<E>::empilha(const	E&	e){
  // if(e == "+")
  //   soma();

  // else if(e=="-"){
  //   sub();
  //   }

  // else if(e=="*"){
  //   multi();
  //   }
    
  // else if(e=="/"){
  //   div();
  //   }

  // else{
    p->insereFim(e);
    }


template	<typename	E>
const	E& Pilha<E>::topo()	const{
  return p->Fim();
}

template	<typename	E>
void	Pilha<E>::desempilha(){
  p->removeFim();

}

template <typename E>
void Pilha<E>::mostra(){
  return p->mostra();
}

template <typename E>
void Pilha<E>::soma(){
  int soma = 0;
  
  soma = stoi(topo());
  desempilha();
  soma += stoi(topo());
  desempilha();
  empilha(to_string(soma));
}

template <typename E>
void Pilha<E>::sub(){
  int sub = 0;

  sub = stoi(topo());
  desempilha();
  sub -= stoi(topo());
  desempilha();
  empilha(to_string(sub));
}

template <typename E>
void Pilha<E>::multi(){
  double multi = 0;
  
  multi = stof(topo());
  desempilha();
  multi *= stof(topo());
  desempilha();
  empilha(to_string(multi));
}

template <typename E>
void Pilha<E>::div(){
  double div = 0;

  div = stof(topo());
  desempilha();
  div /= stof(topo());
  desempilha();
  empilha(to_string(div));
}

#endif