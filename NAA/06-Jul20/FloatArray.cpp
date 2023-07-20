#include "FloatArray.h"
namespace sdds {
   FloatArray::FloatArray( size_t size ) {
      if ( size == 0 ) size = 1;
      m_data = new float[size];
      m_size = size;
   }
   FloatArray::~FloatArray( ) {
      delete[] m_data;
   }
}