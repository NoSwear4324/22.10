#include <iostream>
#include "Soft.h"
#include "Free.h"

int main()
{
    //Soft a;
    Free b("notepad", "ItStep");
    b.showInfo();
    cout << b.isavailable() << endl;
}
