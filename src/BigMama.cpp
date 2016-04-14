#include <BigMama.hpp>
#include <vector>

int BigMama::removeCharAndCountSize(std::string &str, char c)
{
	std:: string str2 = sm.removeCharFromString(str, c);
	int res = dtm.countCharacters(str2);
	return res;
}

int BigMama::removeCharAndCountDiff(std::string &str, char c)
{
	std:: string str2 = sm.removeCharFromString(str, c);
	int res = dtm.countDifference(str, str2);
	return res;
}

int BigMama::concatAndCountSize(std::string &str1, std::string &str2)
{
	std::string conStr = sm.concat(str1, str2);
	return dtm.countCharacters(conStr);
}

void BigMama::addStringToVector(std::string str)
{
	stringVector.push_back(str);
}

int BigMama::countTotalVectorSize()
{
	int total = 0;
	for (std::vector<std::string>::const_iterator i = stringVector.begin(); i != stringVector.end(); ++i)
	{
		total = dtm.addIntegers(total, i->size());
	}
	return total;
}
