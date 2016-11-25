#include "Builder.hpp"

Builder::Builder() : page("<html><head>")
{}

void Builder::addHeader(const std::string &text)
{
    this->page.append("<h1>");
    this->page.append(text);
    this->page.append("</h1>");
}

void Builder::addParagraph(const std::string &text)
{
    this->page.append("<p>");
    this->page.append(text);
    this->page.append("</p>");
}

const std::string& Builder::getPage() const
{
    return this->page;
}
