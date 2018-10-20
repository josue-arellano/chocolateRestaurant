#include <iostream>

class thing {
public:
	thing() { std::cout << "default\n"; }
	thing(const thing& t) { std::cout << "initialized\n"; }
	thing(int n) { std::cout << "int\n"; }
	thing(double d) { std::cout << "double\n"; }
private:
	thing(char c) { std::cout << "char\n"; }
};

int main(){
	thing t;
	thing s = t;
	thing n = 2;
	thing d = 3.45;
	//thing x = 'l';

	return 0;
}
