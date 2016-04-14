#include <iostream>
#include <StringModifier.hpp>
#include <DoTheMath.hpp>
#include <BigMama.hpp>

int main()
{
	StringModifier sm;
	DoTheMath dtm;
	BigMama bm(dtm, sm);
	std::string str1("asdf");
	std::string str2("qwerty");
	bm.addStringToVector(str1);
	bm.addStringToVector(str2);
	int res = bm.countTotalVectorSize();
	std::cout << res << std::endl;
	return 0;
}
