#include <gtest/gtest.h>
#include <BigMama.hpp>
#include <DoTheMathMock.hpp>
#include <StringModifierMock.hpp>

using namespace testing;

class BigMamaTest : public ::testing::Test
{
public:

	BigMamaTest();

	~BigMamaTest(){}

	void setup();
	void teardown();
	void fillVectorWithStrings();

	StringModifierMock sm;
	DoTheMathMock dtm;
	BigMama bm;
};

BigMamaTest::BigMamaTest():bm(BigMama(dtm, sm))
{}

void BigMamaTest::setup()
{

}

void BigMamaTest::teardown()
{

}

void BigMamaTest::fillVectorWithStrings()
{
	std::string str1 = "hello";
	std::string str2 = "world";
	std::string str3 = "again";
	bm.addStringToVector(str1);
	bm.addStringToVector(str2);
	bm.addStringToVector(str3);
}

TEST_F(BigMamaTest, vectorIsFilledCorrectly)
{
	fillVectorWithStrings();
	EXPECT_EQ(bm.stringVector.size(), 3U);
}

TEST_F(BigMamaTest, concatsAndReturnsCorrectSize)
{
	std::string str1 = "adsf";
	ON_CALL(sm, concat(_,_)).WillByDefault(Return("asdfasdf"));
	ON_CALL(dtm, countCharacters(_)).WillByDefault(Return(7));
	EXPECT_EQ(bm.concatAndCountSize(str1, str1), 7);
}

TEST_F(BigMamaTest, countsTotalVectorSizeCorrectly)
{
	fillVectorWithStrings();
	EXPECT_EQ(bm.stringVector.size(), 3U);
	ON_CALL(dtm, addIntegers(_,_)).WillByDefault(Return(127));
	EXPECT_EQ(bm.countTotalVectorSize(), 127);
}

TEST_F(BigMamaTest, countsDiffCorrectly)
{
	std::string str("adsf");
	ON_CALL(dtm, countDifference(_,_)).WillByDefault(Return(127));
	EXPECT_EQ(bm.removeCharAndCountDiff(str, 'a'), 127);
}

TEST_F(BigMamaTest, countsSizeCorrectly)
{
	std::string str("adsf");
	ON_CALL(dtm, countCharacters(_)).WillByDefault(Return(127));
	EXPECT_EQ(bm.removeCharAndCountSize(str, 'a'), 127);
}









