#ifndef _VECTOR_TEST_H
#define _VECTOR_TEST_H

#include <cppunit/extensions/HelperMacros.h>

class VectorTest : public CppUnit::TestFixture
{
  CPPUNIT_TEST_SUITE( VectorTest );
  CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST( testDist2Function );
  CPPUNIT_TEST_SUITE_END();



public:
  void setUp();
  void tearDown();

  void testConstructor();
	void testDist2Function();
};

#endif  // _VECTOR_TEST_H
