#include "Human.h"

string Human::to_print_human()
{
    string s = "";
    s.append(this->name);
    s.append(" ");
    s.append(this->lastname);
    s.append("\n");
    s.append(this->gender);
    s.append("\n");
    s.append(to_string(this->age));
    s.append("\n");
    return s;
}
