#include <iostream>
#include "console.h"
using namespace std;

//��ȡvector�е����ֵ
int maxOf(Vector<int> ints) {
	int maxInt = ints[0];
	for (int myint : ints) {
		if (myint >= maxInt) {
			maxInt = myint;
		}
	}
	return maxInt;
}

void main() {
	Vector<int> myints = { 2, 7, 1, -2 };
	cout << maxOf(myints) << endl;
}
