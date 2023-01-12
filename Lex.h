#pragma once
#include <string>
#include <fstream>

std::string gLex(std::ifstream& inp_d);
void ignoreSpaces(std::ifstream& inp_d);

std::string gLex(std::ifstream& inp_d)
{
	char c;
	ignoreSpaces(inp_d);
	std::string lexem = "";

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
void ignoreSpaces(std::ifstream& inp_d)
{
	while (inp_d.peek() == ' ' || inp_d.peek() == '\n')
	{
		inp_d.get();
	}
}
