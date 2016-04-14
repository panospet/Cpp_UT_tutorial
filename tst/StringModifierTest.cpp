#include <gtest/gtest.h>
#include <StringModifier.hpp>

using namespace testing;

class StringModifierTest : public ::testing::Test
{
public:
	StringModifierTest()
	{
		setup();
	}

	~StringModifierTest(){}

	void setup();

	StringModifier sm;
	std::string str;
	std::string str2;
};

void StringModifierTest::setup()
{
	str = "Hello";
	str2 = "World";
}

TEST_F(StringModifierTest, concatTwoStrings)
{
	std::string res = sm.concat(str, str2);
	EXPECT_EQ(res, "HelloWorld");
}

TEST_F(StringModifierTest, checkEmptyString)
{
	std::string test = "";
	EXPECT_TRUE(sm.isEmpty(test));
}

TEST_F(StringModifierTest, charIsRemovedFromString)
{
	EXPECT_EQ(sm.removeCharFromString(str, 'o'), "Hell");
}
