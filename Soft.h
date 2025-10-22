#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "Date.h"
using namespace std;

class Soft
{
protected:
	string name;
	string company;
public:
	Soft();
	Soft(string name, string company);
	virtual ~Soft();

	void setName(string name);
	void setCompany(string company);
	string getName()const;
	string getCompany()const;

	virtual void showInfo()const = 0;
	virtual void save(ostream& file)const = 0;
	virtual void load(ifstream& file) = 0;
	virtual bool isavailable()const = 0;
};

