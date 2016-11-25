#pragma once

#include <memory>
#include "IPage.hpp"

class Builder
{
public:
    Builder() = default;
    ~Builder() = default;

    std::unique_ptr<IPage>&& getObject();
private:
    std::unique_ptr<IPage> obj;
};

