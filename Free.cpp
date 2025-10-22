#include "Free.h"

Free::Free()
{

}

Free::Free(string name, string company):Soft(name, company)
{

}

Free::~Free()
{
    cout << "~Free" << name << endl;
}

void Free::showInfo() const
{
    cout << "\t Free \n";
    cout << "Soft: " << name << endl;
    cout << "Company: " << company << endl;
}

void Free::save(ostream& file) const
{
    file << "Free\n" << name << endl << company << endl;
}

void Free::load(ifstream& file)
{

}

bool Free::isavailable() const
{
    return false;
}
