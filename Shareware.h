#pragma once
#include "Soft.h"
class Shareware : public Soft
{
protected:
	Date install;
	int term;
public:
	Shareware();
	Shareware(string name, string company, Date install, int term);
	~Shareware();

	//set, get
	virtual void showInfo()const override;
	virtual void save(ostream& file)const override;
	virtual void load(ifstream& file) override;
	virtual bool isavailable()const override;
};

