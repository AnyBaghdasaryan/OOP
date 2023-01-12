#pragma once
#include "Cmd.h"
#include "Lex.h"

class IConsole
{
public:
	virtual H_CMD* parsing(std::ifstream& input) = 0;
	virtual void gInp() = 0;
	virtual void OptResp() = 0;
};

class Console : public IConsole
{
public:

	H_CMD* parsing(std::ifstream& inp)
	{
		return semantic->makeCommand(inp);
	}

	void gInp() override
	{

	}

	void OptResp() override
	{

	}

private:
	//Semantic* sem;
};
