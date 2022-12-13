#pragma once

class H_CMD
{
public:
    virtual void print() = 0;
	  virtual void exe() = 0;
};

class addElem : public H_CMD
{

};

class removeElem : public H_CMD
{

};

