void test_exponential(void) {
  CU_ASSERT(7.389047 == exponent(2));
  CU_ASSERT(1.000000 == exponent(0));
  CU_ASSERT(0.018316 == exponent(-2));
  
  /* Dummy fail*/
/*  CU_ASSERT(2 == multiply(2, 5));  */
}

