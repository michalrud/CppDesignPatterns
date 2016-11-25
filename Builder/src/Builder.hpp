#pragma once

#include <string>

class Builder
{
public:
    Builder();
    ~Builder() = default;

    void addHeader(const std::string& text);
    void addParagraph(const std::string& text);
    const std::string& getPage() const;
private:
    std::string page;
};
