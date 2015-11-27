#include "person.h"

Person::Person()
{
    name = "";
    gender = "";
    age = 0;
    dayOfBirth = 0;
    dayOfDeath = 0;
}

Person::Person(string n, string g, int a, int dob, int dod)
{
    name = n;
    gender = g;
    age = a;
    dayOfBirth = dob;
    dayOfDeath = dod;
}
