#include <gmock/gmock.h>
#include <StringModifier.hpp>

class StringModifierMock : public StringModifier
{
public:

	StringModifierMock(){}
	virtual ~StringModifierMock(){}

	MOCK_METHOD2(removeCharFromString, std::string(std::string str, char c));
	MOCK_METHOD2(concat, std::string(std::string &str1, std::string &str2));
	MOCK_METHOD1(isEmpty, bool(std::string &str));
};
