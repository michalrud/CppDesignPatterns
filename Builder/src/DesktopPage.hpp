#pragma once

#include "IPage.hpp"

class DesktopPage : public IPage
{
public:
    DesktopPage() = default;
    ~DesktopPage() = default;

    void addHeader(const std::string& text) override;
    void addParagraph(const std::string& text) override;

    const std::string& getContent() const;
private:
    std::string content;
};

