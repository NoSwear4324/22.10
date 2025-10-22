#include <iostream>
#include "Soft.h"
#include "Free.h"
#include "Shareware.h"

int main()
{
    //Soft a;
    Free b("notepad", "ItStep");
    b.showInfo();
    cout << b.isavailable() << endl;

    Shareware d("Photoshop", "Adobe", Date() - 5, 3);
    d.showInfo();
    cout << d.isavailable() << endl;
}
