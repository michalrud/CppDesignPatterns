#include "Builder.hpp"

std::unique_ptr<IPage>&& Builder::getObject()
{
    return std::move(obj);
}

