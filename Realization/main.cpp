#include "Realization.h"

int main() 
{
   shared_ptr_toy toy_01 = make_shared_toy("ball");
   shared_ptr_toy toy_02(toy_01);
   shared_ptr_toy toy_03("duck");
   cout << "=================================================" << endl;
   cout << toy_01.getToyName() << " links:" << toy_01.use_count() << "  "
        << toy_02.getToyName() << " links:" << toy_02.use_count() << "  "
        << toy_03.getToyName() << " links:" << toy_03.use_count() << endl;
   cout << "=================================================" << endl;
   toy_02 = toy_03;
   cout << toy_01.getToyName() << " links:" << toy_01.use_count() << "  "
        << toy_02.getToyName() << " links:" << toy_02.use_count() << "  "
        << toy_03.getToyName() << " links:" << toy_03.use_count() << endl;
   cout << "=================================================" << endl;
   toy_01.reset();
   cout << toy_01.getToyName() << " links:" << toy_01.use_count() << "  "
        << toy_02.getToyName() << " links:" << toy_02.use_count() << "  "
        << toy_03.getToyName() << " links:" << toy_03.use_count() << endl;
   cout << "=================================================" << endl;
   return 0;
}