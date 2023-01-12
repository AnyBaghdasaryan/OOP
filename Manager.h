#pragma once
#include <string>
class Manager
{
public:
    virtual void save() = 0;
    virtual void load(std::string slideshowname) = 0;
};
