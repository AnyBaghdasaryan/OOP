#include <iostream>
#include<string>
#include <fstream>

string gLex(ifstream& inp_d);
void ignoreSpaces(ifstream& inp_d);

string gLex(ifstream& inp_d)
{
	char c;
	ignoreSpaces(inp_d);
	string lexem = "";

	if (inp_d.eof())
	{
		return "";
	}
	if (isalpha(inp_d.peek()))
	{
		while (isalpha(inp_d.peek()) || isdigit(inp_d.peek()))
		{
			inp_d.get(c);
			lexem += c;
		}
	}
	else if (isdigit(inp_d.peek()))
	{
		while (isdigit(inp_d.peek()))
		{
			inp_d.get(c);
			lexem += c;
		}
		
	}
	return lexem;
}
void ignoreSpaces(ifstream& inp_d)
{
	while (inp_d.peek() == ' ' || inp_d.peek() == '\n')
	{
		inp_d.get();
	}
}


int main()
{
	std::ifstream in;
	in.open("cmd.txt");
	if (in)
	{
		while (!in.eof())
		{
			gLex(in);
		}
	}
	return 0;
}

