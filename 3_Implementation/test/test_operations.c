#include "unity.h"
#include "nnew.h"

/* Modify these two lines according to the project */
#include "nnew.h"
#define PROJECT_NAME    "main"

/* Prototypes for all the test functions */
void test_and_and(void);
void test_and_and_testcase2(void);
void test_or_ro(void);
void test_nt(void);
void test_nand(void);
void test_nor(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_and_and);
  RUN_TEST(test_and_and_testcase2);
  RUN_TEST(test_or_ro);
  RUN_TEST(test_nt);
  RUN_TEST(test_nand);
  RUN_TEST(test_nor);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_and_and(void) {
  TEST_ASSERT_BITS_HIGH(1, and_and(1, 1));
  TEST_ASSERT_BITS_HIGH(0, and_and(1, 0));
  TEST_ASSERT_BITS_HIGH(0, and_and(0, 0));
  TEST_ASSERT_BITS_HIGH(0,and_and(0, 1));
}
void test_and_and_testcase2(void) {
 
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1500, add(750, 7500));
}
void test_or_ro(void) {
  TEST_ASSERT_BITS_HIGH(1, or_ro(0, 1));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_nt(void) {
  TEST_ASSERT_BITS_HIGH(0, nt(1));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

void test_nand(void) {
  TEST_ASSERT_BITS_HIGH(1, nand(1, 0));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(3, divide(2, 2));
}
void test_nor(void){
     TEST_ASSERT_BITS_HIGH(1, nor(0, 0));
  
}