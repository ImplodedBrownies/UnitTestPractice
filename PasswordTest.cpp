/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, mixed_case_password) {
	Password mixed_password;
	int actual = mixed_password.has_mixed_case("GGGhelFGG");
	ASSERT_EQ(true, actual);
}

TEST(PasswordTest, mixed2) {
	Password mixed_2;
	int actual = mixed_2.has_mixed_case("");
	ASSERT_EQ(false, actual);
}

TEST(PasswordTest, mixed3) {
	Password mixed_3;
	int actual = mixed_3.has_mixed_case("  dD");
	ASSERT_EQ(true, actual);
}

TEST(PasswordTest, mixed4) {
	Password mixed_4;
	int actual = mixed_4.has_mixed_case("123abC");
	ASSERT_EQ(true, actual);
}

TEST(PasswordTest, mixed5) {
	Password mixed_5;
	int actual = mixed_5.has_mixed_case("#&Cab");
	ASSERT_EQ(true, actual);
}

TEST(PasswordTest, mixed6) {
	Password mixed_6;
	int actual = mixed_6.has_mixed_case("-24");
	ASSERT_EQ(false, actual);
}