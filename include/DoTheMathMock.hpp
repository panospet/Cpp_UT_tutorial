#include <gmock/gmock.h>
#include <DoTheMath.hpp>

class DoTheMathMock : public DoTheMath
{
public:
	DoTheMathMock():DoTheMath(){}
	virtual ~DoTheMathMock(){}

	MOCK_METHOD2(addIntegers, int(int a, int b));
	MOCK_METHOD2(subIntegers, int(int a, int b));
	MOCK_METHOD1(countCharacters, int(std::string &str));
	MOCK_METHOD2(countDifference, int(std::string &str1, std::string &str2));
};
