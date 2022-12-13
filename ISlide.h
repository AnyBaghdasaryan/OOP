#include "IElem.h"

class ISlide
{
public:
	virtual void addElem(int p, IElem* t) = 0;
	virtual void removeElem(int index) = 0;
};

class Slide : public ISlide
{
public:
	void addElem(int p, IElem* t) override;
	void removeElem(int index) override;
};
