#include <iostream>
#include "store3.h"
using namespace std;
int main() {
	store A;
	A = store(4, 3, 3, 800, 1000, 800);
	A *= 2;
	cout << A.apple.many << endl;
	cout << A.pear.many << endl;
	cout << A.peach.many << endl;
	cout << A.apple.price << endl;
	cout << A.pear.price << endl;
	cout << A.peach.price << endl;
	return 123;
}
