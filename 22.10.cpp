#include <iostream>
#include "Soft.h"
#include "Free.h"

int main()
{
    Free b("notepad", "ItStep");
    b.showInfo();
    cout << b.isavailable() << endl;
}
