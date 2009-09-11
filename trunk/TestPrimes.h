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

    // isprime() Tests
    void test_isprime_1 () {
        int number = 10;
        CPPUNIT_ASSERT(!isprime(number));
    }

    void test_isprime_2 () {
        int number = 2;
        CPPUNIT_ASSERT(isprime(number));
    }
    
    // read() Test
    void test_read () {
        std::istringstream i("0\n");
        const bool b = read(i);
        CPPUNIT_ASSERT(b  == true);
        CPPUNIT_ASSERT(in ==    0);
    }
    
    // eval() Tests
    void test_eval_1 () {
        in = 8;
        eval();
        CPPUNIT_ASSERT(isprime(sum[0]));
        CPPUNIT_ASSERT(isprime(sum[1]));
        CPPUNIT_ASSERT(isprime(sum[2]));
        CPPUNIT_ASSERT(isprime(sum[3]));
        CPPUNIT_ASSERT(sum[0] + sum[1] + sum[2] + sum[3] == 8);
    }

    void test_eval_2 () {
        in = 0;
        eval();
        std::ostringstream out;
        print(out);
        CPPUNIT_ASSERT(out.str() == "Impossible.\n");
    }

    // print() Test
    void test_print_1 () {
        in = 8; // Clears error code.
        sum[0] = sum[1] = sum[2] = sum[3] = 2;
        std::ostringstream out;
        print(out);
        CPPUNIT_ASSERT(out.str() == "2 2 2 2\n");
    }

    void test_print_2 () {
        in = -1; // Sets error code.
        std::ostringstream out;
        print(out);
        CPPUNIT_ASSERT(out.str() == "Impossible.\n");
    }
    
    // Test Suite!
    CPPUNIT_TEST_SUITE(TestPrimes);
    CPPUNIT_TEST(test_isprime_1);
    CPPUNIT_TEST(test_isprime_1);
    CPPUNIT_TEST(test_read);
    CPPUNIT_TEST(test_eval_1);
    CPPUNIT_TEST(test_eval_2);
    CPPUNIT_TEST(test_print_1);
    CPPUNIT_TEST(test_print_2);
    CPPUNIT_TEST_SUITE_END();
};

#endif // TestPrimes_h
