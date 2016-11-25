#include <iostream>
#include "Builder.hpp"

int main(void)
{
    Builder builder;
    builder.addHeader("Welcome to my website");
    builder.addParagraph("This website is under construction.");
    std::cout << builder.getPage();
    return 0;
}
