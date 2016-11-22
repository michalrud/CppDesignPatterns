#include <istream>
#include <string>
#include "PhoneTypes.hpp"

std::istream& operator>>(std::istream& s, Phone::PhoneType& t)
{
    std::string in;
    s >> in;
    if (in == "gsm")        t = Phone::PhoneType::GSM;
    else if (in == "wcdma") t = Phone::PhoneType::WCDMA;
    else if (in == "lte")   t = Phone::PhoneType::LTE;
    else t = Phone::PhoneType::UNKNOWN;
    return s;
}

