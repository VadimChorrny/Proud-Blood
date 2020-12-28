#include "Lib.h"
#include "FwdList.h"
int main()
{

	FwdList<int> f;
	f.pushFront(10);
	f.pushFront(9);	
	f.pushFront(8);
	
	f.print();
	cout << endl;
	cout << "worked next print()" << endl;
	cout << endl;

	f.printFromLeftToRight();
	f.printFromRightToLeft();

	return 0;
}