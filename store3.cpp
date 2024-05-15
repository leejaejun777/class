#include "store3.h"
float store::total() {
	float x = apple.show();
	x += pear.show();
	x += peach.show();
	return x;
}
// polymorphism
float store::total(float exchangeRate) {
	return total() / exchangeRate;
}
void store::operator *= (int n) {
	apple.many *= n;
	pear.many *= n;
	peach.many *= n;
}
