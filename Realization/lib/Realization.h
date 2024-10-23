#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string make_shared_toy (string toy);

class Toy 
{
public:
    Toy();

    Toy(const string& _name);

    string getName();

    ~Toy();

private:
    string name;
};

class shared_ptr_toy
{
public:
    string getToyName();

    int use_count();

    void reset();

    Toy* GetToyAt();
    
    shared_ptr_toy(string _toy);

    shared_ptr_toy(const shared_ptr_toy& other);

    shared_ptr_toy& operator=(const shared_ptr_toy& other);

    ~shared_ptr_toy();

private:
    string toy;
    Toy* TOY;
};