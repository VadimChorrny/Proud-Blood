#include <iostream>
#include "Lib.h"
using namespace std;

int main()
{

	Unit* a = new Swordsman("Oleg", 12, 10, "Shpanivskiy", 3);
	a->print();
	vector<Unit*> persons = { a };
	for (auto& i : persons)
	{
		i->print();
	}
	cout << "WORK PLEASE!!!!!!!!!!" << endl;

	//Animal* a = new Dog(3, 8, "Vadim Beliy", "simple");
	//a->print();
	//vector<Animal*>animals = { a };
	///*for (auto& i : animals)
	//{
	//	i->sound();
	//}*/
	//cout << "Cat" << endl;
	//Animal* b = new Cat(3, 8, "Vadim Beliy", 10);
	//b->print();
	//cout << "CW" << endl;

	return 0;
}