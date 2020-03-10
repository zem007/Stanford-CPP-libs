#include "vector.h"

using namespace std;

void growUp(Vector<string>& s) {
	s.push_back("last");
	s[0] = "begin";
}

//获取vector中的最大值
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

//int main()
//{
//	vector<string> mystring = { "one", "two", "three" };
//	growUp(mystring);
//
//	for (string _s : mystring) {
//		cout << _s << endl;
//	}
//}
