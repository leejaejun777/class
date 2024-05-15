#pragma once
#include "fruit.h"
class store {
public:
	store() {};
	store(int a, int b, int c,int g, float d, float e, float f,float h) {
		apple = fruit(d, a);
		pear = fruit(e, b);
		peach = fruit(f, c);
		mango = fruit(h, g);
	}
	fruit apple, pear, peach,mango;
	float total();
};
