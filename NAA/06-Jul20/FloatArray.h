#pragma once
#ifndef SDDS_FLOATARRAY_H
#define SDDS_FLOATARRAY_H
namespace sdds {
   class FloatArray {
      float* m_data;
      size_t m_size;
   public:
      size_t size( )const;
      FloatArray( size_t size );
      void setElement(size_t index, float value );
      float getElement( size_t index )const;
      virtual ~FloatArray( );
   };
}
#endif // !SDDS_FLOATARRAY_H


