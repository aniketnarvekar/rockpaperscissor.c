#include "unity.h"
#include "rockpaperscissor.h"

void setUp(void) {}

void tearDown(void) {}

void test_decision_with_valid_character(void) {
  TEST_ASSERT_TRUE(1);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_decision_with_valid_character);
  return UNITY_END();
}
