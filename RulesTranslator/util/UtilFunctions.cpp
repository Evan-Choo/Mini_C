//
//  UtilFunctions.cpp
//  RulesTranslator
//
//  Created by 潇湘夜雨 on 2018/11/17.
//  Copyright © 2018 ssyram. All rights reserved.
//

#include "UtilFunctions.h"
#include <unordered_set>
using std::unordered_set;

namespace rules_translator::utils {
	namespace utils {
		unordered_set<char> dividers = {
			' ', '\n', '\t', '\r'
		};
	}

	bool isDivider(const char c) {
		return utils::dividers.find(c) != utils::dividers.end();
	}
	//    bool isWordBegin(const char c) {
	//        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '_';
	//    }

	string &trimDivider(string &s) {
		for (string::iterator it = s.begin(); it != s.end(); )
		{
			if (isDivider(*it))
				it = s.erase(it);
			else ++it;
		}

		return s;
	}

	string &trimMeaninglessDividers(string &s) {
		size_t b = 0, e = s.length();
		while (isDivider(s[b])) ++b;
		while (b < e && isDivider(s[e - 1])) --e;
		s = s.substr(b, e);
		return s;
	}

}
