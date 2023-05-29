#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << "Hallo saya Function dari base class";
	}
};
class drivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "Hallo saya function dari drived class";
	}
};
int main() {
	drivedClass a;
	a.perkenalan();

	return 0;
}