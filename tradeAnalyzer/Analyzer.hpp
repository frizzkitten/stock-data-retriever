///////////////////////////////////////////////////////////////////////////////
// File Name:      Analyzer.hpp
//
// Author:         Austin Meyer and Chris Haisch
// CS email:       ameyer, haisch
//
// Description:    The header file for the Analyzer class.
///////////////////////////////////////////////////////////////////////////////

#ifndef Analyzer_hpp
#define Analyzer_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <iostream>

class Analyzer {
public:
    static std::vector<std::map<std::string, double>> parseData(std::vector<std::pair<std::string, std::string>> strings);
};

#endif /* Analyzer_hpp */
