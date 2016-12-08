///////////////////////////////////////////////////////////////////////////////
// File Name:      Data.hpp
//
// Author:         Austin Meyer and Chris Haisch
// CS email:       ameyer and haisch
//
// Description:    The declaration of Data methods.
///////////////////////////////////////////////////////////////////////////////

#ifndef Data_hpp
#define Data_hpp

#include <stdio.h>
#include <vector>
#include <string>

class Data {
private:
    std::string html;
    std::string sign;
    std::string name;
    double low;
    double high;
    double current;
    double chg;
    double pChg;
    
public:
    /**
     * @brief Constructor for a Data object.
     *
     * @param NAME The ticker of the company.
     * @param HTML The html to pull info from.
     */
    Data (std::string NAME, std::string HTML);
    
    /**
     * @brief Picks through the html to find the needed data.
     */
    void fillData();
    
    /**
     * @brief Prints out all the stock data for a company.
     */
    void printData();
};

#endif /* Data_hpp */
