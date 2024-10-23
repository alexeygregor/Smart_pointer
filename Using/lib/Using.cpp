#include "Using.h"

Toy::Toy(const string& _name)
{
    name = _name;
}

string Toy::getName()
{
    return name;
}

Toy::~Toy()
{
    cout << "Toy " << name << " was dropped " << endl;
}


Dog::Dog(string _name) : name(_name) {};
 
Dog::Dog() : Dog("Nickname") {};

void Dog::getToy(shared_ptr<Toy> toy)
{
    if (effectiveToy == toy)
        cout << name << ": I already have this toy" << endl;
    else if (toy.use_count() < 3)
    {
        effectiveToy = toy;
        Toy* f = effectiveToy.get();
        cout << name << ": give " << f->getName() << endl;
    }
    else
        cout << name << ": another dog is playing this toy" << endl;
}

void Dog::dropToy()
{
    Toy* f = effectiveToy.get();
    effectiveToy = nullptr;
    cout << name << ": drop " << f->getName() << endl;
}

int Dog::cntToy(int count)
{
    if (effectiveToy.use_count() > 0)
        count = true;
    return count;
}
