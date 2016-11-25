#include "DesktopPage.hpp"

void DesktopPage::addParagraph(const std::string& text)
{
    this->content.append(std::string("Desktop paragraph: ") + text);
    this->content.push_back('\n');
}

void DesktopPage::addHeader(const std::string& text)
{
    this->content.append(std::string("Desktop header: ") + text);
    this->content.push_back('\n');
}

const std::string& DesktopPage::getContent() const
{
    return this->content;
}

