#include "Strategy.hpp"

Strategy::Strategy(std::unique_ptr<IService>&& srv) :
    service(std::move(srv))
{}

void Strategy::setStrategy(std::unique_ptr<IService>&& srv)
{
    this->service = std::move(srv);
}

void Strategy::postStatus(const std::string& status)
{
    this->service->postStatus(status);
}

