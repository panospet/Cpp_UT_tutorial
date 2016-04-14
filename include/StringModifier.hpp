#ifndef STRINGMODIFIER_HPP
#define STRINGMODIFIER_HPP

#include <iostream>

/*
 * Class that does string operations.
 */
class StringModifier
{
public:
	StringModifier(){}
	virtual ~StringModifier(){}

	/*
	 * Removes all characters c from string str.
	 */
	virtual std::string removeCharFromString(std::string str, char c);

	/*
	 * Concatenates two strings.
	 */
	virtual std::string concat(std::string &str1, std::string &str2);

	/*
	 * Returns true if a string is empty.
	 */
	virtual bool isEmpty(std::string &str);
};

#endif
