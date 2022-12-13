#include "Cmd.h"

class IConsole
{
public:
    virtual H_CMD* parsing() = 0;
	  virtual void gInp() = 0;
	  virtual void OptResp() = 0;
};

class Console : public IConsole
{
public:

    H_CMD* parsing(ifstream& inp)
	{
		inp.open("cmd.txt");
		if (inp)
		{
			while (!inp.eof())
			{
				gLex(inp);
			}
		}
	}
	
	void gInp() override
	{
	    
	}
	
	void OptResp() override
	{
	    
	}
};

