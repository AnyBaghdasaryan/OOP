#pragma once
#include "ContainerS.h"

class H_CMD
{
public:
    virtual void print() = 0;
    virtual void exe(ContainerS*) = 0;
};

class addElem : public H_CMD
{

};

class removeElem : public H_CMD
{

};

class addSlide : public H_CMD
{
private:
    int pos;
public:
    addSlide(int p);
    void exe(ContainerS* s);
};

class removeSlide : public H_CMD
{
private:
    int pos;
public:
    removeSlide(int p);
    void execute(ContainerS* s);
};
