///////////////////////////////////////////////////////////////////////////////
// File Name:      Data.cpp
//
// Author:         Austin Meyer and Chris Haisch
// CS email:       ameyer and haisch
//
// Description:    The implementation of Data methods.
///////////////////////////////////////////////////////////////////////////////

#include "Data.hpp"
#include <vector>
#include <iostream>

Data::Data(std::string NAME, std::string HTML) {
    name = NAME;
    //all the html of the website
    html = HTML;
    fillData();
}

void Data::fillData() {
    std::string changePlace = "yfs_c63_" + name;
    std::string pChangePlace = "yfs_pp0_" + name;
    std::string lowPlace = "yfs_g53_" + name;
    std::string highPlace = "yfs_h53_" + name;
    std::string currentPlace = "yfs_l84_" + name;
    
    size_t addingSize = changePlace.size() + 2;
    
    size_t indexChg = html.find(changePlace) + addingSize;
    size_t indexPChg = html.find(pChangePlace) + addingSize;
    size_t indexLow = html.find(lowPlace) + addingSize;
    size_t indexHigh = html.find(highPlace) + addingSize;
    size_t indexCurrent = html.find(currentPlace) + addingSize;
    size_t indexSign = indexChg - 1;
    
    std::string changeS = html.substr(indexChg + 1, 6);
    std::string pChangeS = html.substr(indexPChg + 1, 6);
    std::string lowS = html.substr(indexLow, 6);
    std::string highS = html.substr(indexHigh, 6);
    std::string currentS = html.substr(indexCurrent, 6);
    sign = html.substr(indexSign + 1, 1);
    
    chg = std::stod(changeS);
    pChg = std::stod(pChangeS);
    current = std::stod(currentS);
    high = std::stod(highS);
    low = std::stod(lowS);
}

void Data::printData() {
    std::cout << "\n" << name << ":" << std::endl;
    std::cout << "\tCURRENT\t\t" << current << "\n\tLOW\t\t\t" << low <<
                "\n\tHIGH\t\t" << high << "\n\tCHANGE\t\t" << sign << chg <<
                "\n\t%CHANGE\t\t" << sign << pChg << "%" << std::endl;
}





