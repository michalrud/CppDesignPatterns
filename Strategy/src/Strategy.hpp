#pragma once

#include "IService.hpp"

class Strategy : public IService
{
public:
    Strategy(std::unique_ptr<IService>&& service);
    virtual ~Strategy() = default;

    void setStrategy(std::unique_ptr<IService>&& service);
    void postStatus(const std::string& status) override;
private:
    std::unique_ptr<IService> service;
};

