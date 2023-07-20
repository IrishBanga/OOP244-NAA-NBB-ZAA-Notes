#include <iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;

void showArry( const IntArray& ar );

int main( ) {
   IntArray I( 4 );
   cout << I.size( ) << endl;
   for ( size_t i = 0; i < I.size( ); i++ ) {
      I.setElement( i, (i + 1) * 10 );
   }
   showArry( I );
   return 0;
}

void showArry( const IntArray& ar ) {
   for ( size_t i = 0; i < ar.size( ); i++ ) {
      cout << ar.getElement( i );
      if ( i + 1 != ar.size( ) ) cout << ", ";
   }
   cout << endl;
}
