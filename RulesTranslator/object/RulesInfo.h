//
//  RulesInfo.h
//  RulesTranslator
//
//  Created by 潇湘夜雨 on 2018/11/20.
//  Copyright © 2018 ssyram. All rights reserved.
//

#ifndef RulesInfo_h
#define RulesInfo_h
#include "../extern/rules_translator.h"

namespace rules_translator {

	struct RulesInfo
	{
		std::size_t eof; // the ending terminate number, also at the same time the amount of other terminate
		std::size_t nonterminateType_amount;
		std::unordered_map<symbol_type, string> terminate2StringMap;
		std::unordered_map<symbol_type, string> nonterminate2StringMap;
		// same the map between nonterminate type and corresponding C++ class name
		std::unordered_map<symbol_type, string> nonterminateType_CppClassName_map;
		std::vector<Production> productions;
	};

}
#endif /* RulesInfo_h */