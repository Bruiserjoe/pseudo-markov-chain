// MarkovChainSentence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
std::string line;
main1 bigmain;
std::string readlines;

int main()
{
	
	srand(time(NULL));
	bigmain.m_file.open("input.txt", std::ios::app | std::ios::out);
	while (getline(bigmain.m_file, line, ' ')) {
		
			bigmain.textlines.emplace_back(line);
		
	}
	bigmain.lamo = bigmain.textlines.size() - 1;

	
	for (auto const& s : (bigmain.textlines)) {
		readlines += s;

	}
	
	return bigmain.loop1();


	std::cin.get();
	return 0;
}

