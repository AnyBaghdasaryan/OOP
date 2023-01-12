#pragma once
#include <vector>
#include "ISlide.h"

class ContainerS
{
public:
    virtual int currentSlideNum() = 0;
    virtual void addSlide(int pos) = 0;
    virtual void removeSlide(int pos) = 0;
};


class Slideshow : public ContainerS
{
private:
    std::vector <Slide> slideshow;
    int currentS = 0;

public:

    int currentSlideNum() override
    {
        return currentS;
    }

    void addSlide(int pos) override
    {
        Slide* newS = new Slide();
        slideshow.insert(slideshow.begin() + pos, *newS);
    }

    void removeSlide(int pos) override
    {
        slideshow.erase(slideshow.begin() + pos);
    }

};
