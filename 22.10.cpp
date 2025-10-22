#include <iostream>
#include "Soft.h"
#include "Free.h"
#include "Shareware.h"
#include <vector>

int main()
{
    //Soft a;
    //--------------------------------------------------
    //Free b("notepad", "ItStep");
    //b.showInfo();
    //cout << b.isavailable() << endl;

    //Shareware d("Photoshop", "Adobe", Date() - 5, 3);
    //d.showInfo();
    //cout << d.isavailable() << endl;
    //--------------------------------------------------
    vector<Soft*> admin;

    ifstream fileRead("info-soft.txt");
    Soft* ptrObj = nullptr;

    if (fileRead.is_open())
    {
        while (!fileRead.eof())
        {
            string type = "";
            getline(fileRead, type);
            if (type == "Free")
            {
                ptrObj = new Free();
                ptrObj->load(fileRead);
                admin.push_back(ptrObj);
            }
            else if (type == "ShareWare")
            {
                ptrObj = new Shareware();
                ptrObj->load(fileRead);
                admin.push_back(ptrObj);
            }
            // else if type ...

        }
        fileRead.close();
    }

    for (auto item : admin)
    {
        item->showInfo();
    }

    cout << "================================\n";

    for (auto item : admin)
    {
        delete item;
    }
}
