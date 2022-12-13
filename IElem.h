#include <iostream>

class IElem
{
public:
	virtual void print(ostream& ) = 0;
};


class Rect : public IElem
{
private:
	int x, y, w, l;

public:
	void print(ostream& output) override
	{
		output << "Rectangle is printed in (" << x << "," << y << "), which width is " << w << " and length is " << l << "\n";
	}
};

class Circle : public IElem
{
private:
	int x, y, r;

public:
	void print(ostream& output) override
	{
		output << "Circle is printed in (" << x << "," << y << "), which radius is equal to " << r << "\n";
	}
};

class Line : public IElem
{
private:
	int x, y, len;

public:
	void print(ostream& output) override
	{
		output << "Line is printed in (" << x << "," << y << "), which length is " << len << "\n";
	}
};
