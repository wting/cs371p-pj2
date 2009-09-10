// -----------------------------
// projects/primes/TestPrimes.h
// Copyright (C) 2009
// Glenn P. Downing
// -----------------------------

// -----------------------------
// Name: Benry Yip, William Ting
// Date: 9/8/09
// -----------------------------

#ifndef TestPrimes_h
#define TestPrimes_h

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% INCLUDES
#include <sstream> // istringtstream, ostringstream
#include <string>  // ==

#include "cppunit/TestFixture.h"             //< TestFixture
#include "cppunit/extensions/HelperMacros.h" //< CPPUNIT_TEST, CPPUNIT_TEST_SUITE,
                                             //< CPPUNIT_TEST_SUITE_END

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% TestPrimes
struct TestPrimes : CppUnit::TestFixture {
    
    // read() Test
    void test_read () {
        std::istringstream in("0\n");
        const bool b = read(in);
        CPPUNIT_ASSERT(b == true);
        CPPUNIT_ASSERT(i ==    0);
    }
    
    // eval() Tests
    void test_eval_1 () {
        i = 8;
        eval();
        CPPUNIT_ASSERT(w + x + y + z == 8);
    }

    // print() Test
    void test_print () {
        i = 8;
        std::ostringstream out;
        print(out);
        CPPUNIT_ASSERT(out.str() == "2 2 2 2\n");
    }

    void test_print_impossible () {
        i = 0;
        std::ostringstream out;
		eval();
        print(out);
        CPPUNIT_ASSERT(out.str() == "Impossible.\n");
    }
    
    // Test Suite!
    CPPUNIT_TEST_SUITE(TestPrimes);
    CPPUNIT_TEST(test_read);
    CPPUNIT_TEST(test_eval_1);
    CPPUNIT_TEST(test_print);
    CPPUNIT_TEST(test_print_impossible);
    CPPUNIT_TEST_SUITE_END();
};

#endif // TestPrimes_h
