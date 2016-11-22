#pragma once

#include <istream>

namespace Phone
{
    enum class PhoneType
    {
        UNKNOWN = 0,
        GSM,
        WCDMA,
        LTE
    };
}

std::istream& operator>>(std::istream& s, Phone::PhoneType& t);

