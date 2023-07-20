#include "IntArray.h"
namespace sdds {

   // add safe empty state logic for memory allocation

   IntArray::IntArray( size_t size ) {
      if ( size == 0 ) size = 1;
      m_data = new int[size];
      m_size = size;
   }

   size_t IntArray::size( ) const {
      return m_size;
   }

   int IntArray::getElement( size_t index ) const {
      return m_data[index % m_size];
   }

   void IntArray::setElement( size_t index, int value ) {
      m_data[index % m_size] = value;
   }

   IntArray::~IntArray( ) {
      delete[] m_data;
   }

}