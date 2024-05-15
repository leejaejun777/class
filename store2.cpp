#include "store2.h"
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
// operator overloading
store store::operator-(store&a){
	store b;
	b.apple.many = apple.many - a.apple.many;
	b.pear.many = pear.many - a.pear.many;
	b.peach.many = peach.many - a.peach.many;
	b.apple.price = 1000;
	b.pear.price = 1200;
	b.peach.price = 1000;
	return b;
}
