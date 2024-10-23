#include "Realization.h"

vector<int>toyCnt;
vector<string>toyVec;

string make_shared_toy(string toy)
{
    return toy;
}

Toy::Toy() {};

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


string shared_ptr_toy::getToyName()
{
    return toy;
}

int shared_ptr_toy::use_count()
{
    int cnt = 0;
    for(int i = 0; i < toyVec.size(); ++i)
    {
        if(toy == toyVec[i])
            cnt = i;
    }
    return toyCnt[cnt];
}

void shared_ptr_toy::reset()
{
    int b = 0;
    for(int i = 0; i < toyVec.size(); ++i)
    {
        if(toy == toyVec[i])
            toyCnt[i] = 0;
    }
}

Toy* shared_ptr_toy::GetToyAt()
{
    return TOY;
}
    
shared_ptr_toy::shared_ptr_toy(string _toy)
{
    toy = _toy;
    TOY = new Toy(toy);
    toyVec.push_back(toy);
    toyCnt.push_back(1);
}

shared_ptr_toy::shared_ptr_toy(const shared_ptr_toy& other)
{
    toy = other.toy;
    for(int i = 0; i < toyVec.size(); ++i)
    {
        if(toy == toyVec[i])
            toyCnt[i]++;
    }  
}

shared_ptr_toy& shared_ptr_toy::operator=(const shared_ptr_toy& other)
{
    if (this == &other)
        return *this;
    toy = other.toy;
    for(int i = 0; i < toyVec.size(); ++i)
    {
        if(toy == toyVec[i])
            toyCnt[i]++;
        else
            toyCnt[i]--;
    }  
    return *this;
}

shared_ptr_toy::~shared_ptr_toy()
{
    TOY = nullptr;        
}