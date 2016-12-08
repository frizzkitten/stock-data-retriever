//
//  Analyzer.cpp by Austin Meyer and Chris Haisch
//

#include "Analyzer.hpp"

std::vector<std::map<std::string, double>> parseData(std::vector<std::pair<std::string, std::string>> strings) {
    std::vector<std::map<std::string, double>> maps;
    
    for (size_t i = 0; i < strings.size(); ++i) {
        const int OUT_OF_RANGE = 50000;
        
        std::string name = strings[i].first;
        std::string data = strings[i].second;
        
        std::string changePlace = "yfs_c63_" + name;
        std::string pChangePlace = "yfs_pp0_" + name;
        
        size_t index1 = data.find(changePlace);
        size_t index2 = data.find(pChangePlace);
        
        if (index1 > OUT_OF_RANGE || index2 > OUT_OF_RANGE) {
            std::cout << name << " does not exist. " << std::endl;
            continue;
        }
        
        std::string change = data.substr(data.find(changePlace) + changePlace.size() + 2, 5);
        std::string pChange = data.substr(data.find(pChangePlace) + pChangePlace.size() + 3, 4);
        
        std::cout << name << " changed by " << change << " which was " << pChange << "%" << std::endl;
        
    }
    
    return maps;
}
