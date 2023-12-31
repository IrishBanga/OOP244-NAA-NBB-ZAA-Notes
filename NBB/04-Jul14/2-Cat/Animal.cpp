#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Animal.h"
#include "Utils.h"
namespace sdds {
   bool debug = false;
   Animal::Animal(const char* name) {
      this->name(name);
      if(debug) cout << "Creating " << this->name() << " the Animal" << endl;
   }
   const char* Animal::name()const {
      return m_name;
   }
   void Animal::name(const char* value) {
      ut.strcpy(m_name, value, 40);
   }
   void Animal::act() {
      cout << name() << " Acts like animal" << endl;
   }
   void Animal::move() {
      cout << name( ) << " Moves like animal" << endl;
   }
   void Animal::sound() {
      cout << name( ) << " Sounds like animal" << endl;
   }
   Animal::~Animal() {
      if(debug) cout << "Removing " << m_name << " the animal" << endl;
   }
}