#include "FloatArray.h"
namespace sdds {
   size_t FloatArray::size( ) const {
      return m_size;
   }
   FloatArray::FloatArray( size_t size ) {
      if ( size == 0 ) size = 1;
      m_data = new float[size];
      m_size = size;
   }

   const float& FloatArray::element( size_t index )const {
      return m_data[index % m_size];
   }
   float& FloatArray::element( size_t index ) {
      return m_data[index % m_size];
   }
   FloatArray::~FloatArray( ) {
      delete[] m_data;
   }
}