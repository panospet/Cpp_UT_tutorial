#ifndef DOTHEMATH_HPP
#define DOTHEMATH_HPP

#include <iostream>

/*
 * Class for simple math operations
 */
class DoTheMath
{

public:
	DoTheMath(){}
	virtual ~DoTheMath(){}

	virtual int addIntegers(int a, int b);

	virtual int subIntegers(int a, int b);

	virtual int countCharacters(std::string &str);

	virtual int countDifference(std::string &str1, std::string &str2);
};

#endif
