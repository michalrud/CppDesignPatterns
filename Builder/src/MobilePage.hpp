#pragma once

#include "IPage.hpp"

class MobilePage : public IPage
{
public:
    MobilePage() = default;
    ~MobilePage() = default;

    void addHeader(const std::string& text) override;
    void addParagraph(const std::string& text) override;

    const std::string& getContent() const;
private:
    std::string content;
};

