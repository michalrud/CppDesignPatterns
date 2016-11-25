#include "MobilePage.hpp"

void MobilePage::addParagraph(const std::string& text)
{
    this->content.append(std::string("Mobile paragraph: ") + text);
    this->content.push_back('\n');
}

void MobilePage::addHeader(const std::string& text)
{
    this->content.append(std::string("Mobile header: ") + text);
    this->content.push_back('\n');
}

const std::string& MobilePage::getContent() const
{
    return this->content;
}

