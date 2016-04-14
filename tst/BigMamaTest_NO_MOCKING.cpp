#include <gtest/gtest.h>
#include <BigMama.hpp>

using namespace testing;

//class BigMamaTest : public ::testing::Test
//{
//public:
//
//	BigMamaTest()
//	{
//		setup();
//	}
//
//	~BigMamaTest(){}
//
//	void setup();
//	void fillVectorWithStrings();
//
//	StringModifier sm;
//	DoTheMath dtm;
//	BigMama bm = BigMama(dtm,sm);
//};
//
//void BigMamaTest::setup()
//{
//
//}
//
//void BigMamaTest::fillVectorWithStrings()
//{
//	std::string str1 = "hello";
//	std::string str2 = "world";
//	std::string str3 = "again";
//	bm.addStringToVector(str1);
//	bm.addStringToVector(str2);
//	bm.addStringToVector(str3);
//}
//
//TEST_F(BigMamaTest, startsWithEmptyVector)
//{
//	int a = bm.countTotalVectorSize();
//	EXPECT_EQ(a,0);
//}
//
//TEST_F(BigMamaTest, countsTotalVectorCharSize)
//{
//	fillVectorWithStrings();
//	EXPECT_EQ(bm.stringVector.size(), 3U);
//	EXPECT_EQ(bm.countTotalVectorSize(), 15);
//}
//
//TEST_F(BigMamaTest, concatsAndReturnsCorrectSize)
//{
//	std::string str1 = "adsf";
//	EXPECT_EQ(bm.concatAndCountSize(str1, str1), 8);
//}
//
//TEST_F(BigMamaTest, removeCharAndCountCorrectDiffAndSize)
//{
//	std::string str1 = "adsf";
//	EXPECT_EQ(bm.removeCharAndCountDiff(str1, 'a'), 1);
//	EXPECT_EQ(bm.removeCharAndCountSize(str1, 's'), 3);
//}









