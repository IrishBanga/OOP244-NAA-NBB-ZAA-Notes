#pragma once
#ifndef SDDS_FLOATARRAY_H
#define SDDS_FLOATARRAY_H
namespace sdds {
   class FloatArray {
      float* m_data;
      size_t m_size;
   public:
      FloatArray( size_t size );

      virtual ~FloatArray( );
   };
}
#endif // !SDDS_FLOATARRAY_H


