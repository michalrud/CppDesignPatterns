#include <iostream>
#include <string>

int main(void)
{
    bool isDesktop = true;
    std::cout << "Is it a desktop computer? 1 if so, 0 otherwise." << std::endl;
    std::cin >> isDesktop;
    std::string page;
    if (isDesktop)
    {
        page.append("Desktop header: Welcome to my website");
        page.append("Desktop paragraph: This website is under construction.");
    }
    else
    {
        page.append("Mobile header: Welcome to my website");
        page.append("Mobile paragraph: This website is under construction.");
    }
    std::cout << page;
    return 0;
}
