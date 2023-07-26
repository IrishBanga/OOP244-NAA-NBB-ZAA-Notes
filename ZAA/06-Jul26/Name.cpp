#include "Utils.h"
#include "Name.h"
namespace sdds {
   Name::Name( const char* value ) {
      if ( value ) {
         m_value = new char[ut.strlen( value ) + 1];
         ut.strcpy( m_value, value );
      }
      else {
         m_value = new char[ut.strlen( "No Name" ) + 1];
         ut.strcpy( m_value, "No Name" );
      }
   }

   Name::Name( const Name& N ) {
      operator=( N );
   }

   Name& Name::operator=( const Name& N ) {
      if ( this != &N ) {
         delete[] m_value;
         m_value = new char[ut.strlen( N.m_value ) + 1];
         ut.strcpy( m_value, N.m_value );
      }
      return *this;
   }

   Name::~Name( ) {
      delete[] m_value;
   }
   std::ostream& Name::write( std::ostream& ostr ) const {
      return ostr << m_value;
   }
   std::ostream& operator<<( std::ostream& leftOperand, const Name& rightOperand ) {
      return rightOperand.write( leftOperand );
   }
}
