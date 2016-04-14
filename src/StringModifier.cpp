#include "StringModifier.hpp"
#include <ctime>
#include <algorithm>

std::string StringModifier::removeCharFromString(std::string str, char c)
{
    for (unsigned int i = 0; i < str.length(); i++)
    {
        if(str[i] == c)
        {
            str.erase(std::remove(str.begin(), str.end(), c), str.end());
        }
    }
    return str;
}

std::string StringModifier::concat(std::string &str1, std::string &str2)
{
	return str1 + str2;
}

bool StringModifier::isEmpty(std::string &str)
{
	if (str.size()==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
