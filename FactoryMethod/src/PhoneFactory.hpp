#pragma once
#include <memory>
#include "IPhone.hpp"
#include "PhoneTypes.hpp"

namespace Phone
{
    std::unique_ptr<IPhone> phoneFactory(PhoneType type);
}

