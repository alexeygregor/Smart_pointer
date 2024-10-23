#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Toy
{
public:
    Toy(const string& _name);

    string getName();

    ~Toy();

private:
    string name;
};


class Dog
{
public:
    Dog(string _name);

    Dog();

    void getToy(shared_ptr<Toy> toy);

    void dropToy();

    int cntToy(int count);

private:
    string name;
    shared_ptr<Toy> effectiveToy;
};
