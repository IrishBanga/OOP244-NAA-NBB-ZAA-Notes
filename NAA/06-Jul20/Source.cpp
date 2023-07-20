#include <iostream>
#include "FloatArray.h"
using namespace std;
using namespace sdds;
void showArray( const FloatArray& ar ) {
   for ( size_t i = 0; i < ar.size( ); i++ ) {
      cout << ar.element( i );
      if(i != ar.size()-1 )  cout << ", ";
   }
   cout << endl;
}
int main( ) {
   FloatArray f( 10 );
   for ( size_t i = 0; i < f.size( ); i++ ) {
      f.element( i) = (i + 1) * 1.23f;
   }
   showArray( f );
   return 0;
}