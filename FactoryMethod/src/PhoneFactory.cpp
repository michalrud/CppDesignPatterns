#include "PhoneFactory.hpp"
#include "GsmPhone.hpp"
#include "WcdmaPhone.hpp"
#include "LtePhone.hpp"

using namespace Phone;

std::unique_ptr<IPhone> Phone::phoneFactory(PhoneType type)
{
    switch (type)
    {
    case PhoneType::GSM:
        return std::make_unique<GsmPhone>();
    case PhoneType::WCDMA:
        return std::make_unique<WcdmaPhone>();
    case PhoneType::LTE:
        return std::make_unique<LtePhone>();
    default:
        break;
    }
    return std::unique_ptr<IPhone>();
}

