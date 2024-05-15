#include <iostream>
#include "store.h"
using namespace std;
int main() {
	store A, B;
	B = store(3, 4, 5,8, 100, 200, 300,700);
	cout << A.total() << endl;
	cout << B.total() << endl;
	cout << " A mango " << A.mango.price << endl;
	return 123;
}
