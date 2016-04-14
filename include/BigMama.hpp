#ifndef BIGMAMA_HPP
#define BIGMAMA_HPP

#include <vector>
#include <StringModifier.hpp>
#include <DoTheMath.hpp>

class BigMama
{

public:
	BigMama(DoTheMath &dtm, StringModifier &sm):
		sm(sm),dtm(dtm)
	{}
	~BigMama(){}

	int removeCharAndCountSize(std::string &str, char c);

	int removeCharAndCountDiff(std::string &str, char c);

	int concatAndCountSize(std::string &str1, std::string &str2);

	void addStringToVector(std::string str);

	int countTotalVectorSize();

	std::vector<std::string> stringVector;
	StringModifier &sm;
	DoTheMath &dtm;
};

#endif
