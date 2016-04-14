#include <gtest/gtest.h>
#include <DoTheMath.hpp>

using namespace testing;

class DoTheMathTest : public ::testing::Test
{
public:
	DoTheMathTest()
	{
		setup();
	}

	~DoTheMathTest(){}

	void setup();

	DoTheMath dtm;
	std::string str;
	std::string str2;
};

void DoTheMathTest::setup()
{
	str = "asdf";
	str2 = "as";
}

TEST_F(DoTheMathTest, allFunctionsWork)
{
	int a = dtm.countCharacters(str);
	EXPECT_EQ(a, 4);
	int b = dtm.addIntegers(2,3);
	EXPECT_EQ(b, 5);
	int c = dtm.subIntegers(3,2);
	EXPECT_EQ(c, 1);
	int d = dtm.countDifference(str, str2);
	EXPECT_EQ(d, 2);
}
