#pragma once
#include "Soft.h"
class Free : public Soft
{
public:
	Free();
	Free(string name, string company);
	~Free();

	virtual void showInfo()const override;
	virtual void save(ostream& file)const override;
	virtual void load(ifstream& file) override;
	virtual bool isavailable()const override;
};

