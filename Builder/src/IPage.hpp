#pragma once

#include <string>

class IPage
{
public:
    IPage() = default;
    virtual ~IPage() = default;

    virtual void addHeader(const std::string& text) = 0;
    virtual void addParagraph(const std::string& text) = 0;
};

