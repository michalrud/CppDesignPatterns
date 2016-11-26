#include <iostream>
#include <string>
#include <memory>
#include "strategy.hpp"
#include "fb.hpp"
#include "twitter.hpp"
#include "medium.hpp"
#include "statusPoster.hpp"

int main(void)
{
    std::string status;
    std::cout << "Enter status message: ";
    std::cin >> status;

    auto fb = std::make_unique<Fb>();
    auto tw = std::make_unique<Twitter>();
    auto md = std::make_unique<Medium>();

    auto strategy = std::make_shared<Strategy>(std::move(fb));
    StatusPoster sp(strategy);

    sp.post(status);

    strategy->setStrategy(std::move(tw));
    sp.post(status);

    strategy->setStrategy(std::move(md));
    sp.post(status);

    return 0;
}
