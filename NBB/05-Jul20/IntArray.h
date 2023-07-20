#pragma once
#ifndef SDDS_INTARRAY_H
#define SDDS_INTARRAY_H
namespace sdds {
   class IntArray {
      int* m_data;
      size_t m_size;
   public:
      IntArray( size_t size );
      size_t size( )const;
      int getElement( size_t index )const;
      void setElement( size_t index,
                                    int value );
      virtual ~IntArray( );
   };
}

#endif // !SDDS_INTARRAY_H


