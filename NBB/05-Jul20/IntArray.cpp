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

   const int& IntArray::operator[]( size_t index ) const {
      return m_data[index % m_size];
   }
   
   
   int& IntArray::operator[]( size_t index )  {
      return m_data[index % m_size];
   }


   IntArray::~IntArray( ) {
      delete[] m_data;
   }

}