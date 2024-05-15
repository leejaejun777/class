#include <iostream>
#include "store2.h"
using namespace std;
int main() {
	store A, B, C;
	A = store(4, 3, 3, 800, 1000, 800);
	C = store(7, 6, 7, 800, 1000, 800);
	B = C - A;
	cout << A.total() << " " << C.total() << endl;
	cout << B.total() << endl;
	cout << B.apple.many << endl;
	cout << B.apple.price << endl;
	cout << B.pear.many << endl;
	cout << B.pear.price << endl;
	cout << B.peach.many << endl;
	cout << B.peach.price << endl;
	return 123;
}
