#include "Entry.hpp"

Entry::Entry(string value)
{
    this->value = value;
    random();
}

Entry::Entry(int key, string value)
{
    this->key = key;
    this->value = value;
}

void Entry::random()
{
    srand(time(NULL));
    key = (rand() % 100); //key becomes random number between 0 and 99
}

int Entry::getKey() const
{
    return key;
}

string Entry::getValue() const
{
    return value;
}

string Entry::toString() const
{
    return "(" + to_string(key) + ", " + value + ")";
}
