#include "Using.h"

int main()
{
    shared_ptr<Toy> ball = make_shared<Toy>("Ball");
    shared_ptr<Toy> bone = make_shared<Toy>("Bone");
    shared_ptr<Toy> cube = make_shared<Toy>("Cube");

    vector<shared_ptr<Dog>> dog;
    dog.push_back(make_shared<Dog>("Sharik"));
    dog.push_back(make_shared<Dog>("Snezhok"));
    dog.push_back(make_shared<Dog>("Pushok"));
    dog.push_back(make_shared<Dog>("Pupsik"));
    dog.push_back(make_shared<Dog>("Iriska"));

    dog[0]->getToy(ball);
    dog[0]->getToy(ball);
    dog[0]->dropToy();
    dog[1]->getToy(ball);
    dog[2]->getToy(ball);
    dog[3]->getToy(bone);
    dog[4]->getToy(bone);
    dog[4]->getToy(cube);

    int count = 0;
    for (int i = 0; i < 5; ++i)
    {
        count += dog[i]->cntToy(count);
    }
    cout << --count << " dog have toy." << endl;
    return 0;
}