#include "Shareware.h"

Shareware::Shareware()
{
    term = 1;
}

Shareware::Shareware(string name, string company, Date install, int term):Soft(name, company)
{
    this->install = install;
    this->term = term;
}

Shareware::~Shareware()
{
    cout << "~Shareware" << name << endl;
}

void Shareware::showInfo() const
{
    cout << "\t Shareware \n";
    cout << "Soft: " << name << endl;
    cout << "Company: " << company << endl;
    cout << "Date: " << install << endl;
    cout << "Term: " << term << endl;
    cout << "Finish: " << install + term << endl;
}

void Shareware::save(ostream& file) const
{
    file << "ShareWare\n" << name << endl << company << endl;
    file << install.getDay() << " " << install.getMonth() << " " << install.getYear() << endl;
    file << term << endl;
}

void Shareware::load(ifstream& file)
{
    getline(file, name);
    getline(file, company);
    //string text;
    //getline(file, text);
    //install.setDay(atoi(text.substr(0, 2).c_str()));
    //install.setMonth(atoi(text.substr(3, 2).c_str()));
    //install.setYear(atoi(text.substr(5, 4).c_str()));
    int d, m, y;
    file >> d >> m >> y;
    install = Date(d, m, y);
    file >> term;
}

bool Shareware::isavailable() const
{
    return install + term >= Date();
}
