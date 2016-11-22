#include <iostream>
#include <memory>
#include <string>
#include "IPhone.hpp"
#include "PhoneTypes.hpp"
#include "PhoneFactory.hpp"

const Phone::PhoneNumber PHONE_NO = 123456789;

int main()
{
    Phone::PhoneType phoneType = Phone::PhoneType::UNKNOWN;
    std::cout << "What phone? Possible options: 'gsm', 'wcdma', 'lte'" << std::endl;
    std::cin >> phoneType;
    auto phone = Phone::phoneFactory(phoneType);
    phone->makeCall(PHONE_NO);
    phone->sendMessage(PHONE_NO, "Hello there!");
    return 0;
}
