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
      const float& element( size_t index )const;
      float& element( size_t index );
      virtual ~FloatArray( );
   };
}
#endif // !SDDS_FLOATARRAY_H


