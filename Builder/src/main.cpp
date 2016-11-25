#include <iostream>
#include "DesktopPage.hpp"
#include "MobilePage.hpp"

int main(void)
{
    bool isDesktop = true;
    std::cout << "Is it a desktop computer? 1 if so, 0 otherwise." << std::endl;
    std::cin >> isDesktop;
    if (isDesktop)
    {
        DesktopPage desktop;
        desktop.addHeader("Welcome to my website");
        desktop.addHeader("This website is under construction.");
        std::cout << desktop.getContent();
    }
    else
    {
        MobilePage mobile;
        mobile.addHeader("Welcome to my website");
        mobile.addHeader("This website is under construction.");
        std::cout << mobile.getContent();
    }
    return 0;
}
