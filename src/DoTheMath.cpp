#include "DoTheMath.hpp"

int DoTheMath::subIntegers(int a, int b)
{
	return a - b;
}

int DoTheMath::addIntegers(int a, int b)
{
	return a + b;
}

int DoTheMath::countCharacters(std::string &str)
{
	return str.size();
}

int DoTheMath::countDifference(std::string &str1, std::string &str2)
{
	return subIntegers(countCharacters(str1), countCharacters(str2));
}
