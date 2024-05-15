#pragma once
#include "fruit.h"
class store {
public:
	store() { i = 2; };
	int i;
	store(int a, int b, int c, float d, float e, float f) {
		apple = fruit(d, a);
		pear = fruit(e, b);
		peach = fruit(f, c);
	}
	fruit apple, pear, peach;
	void operator *=(int);
	float total();
	float total(float);
};
