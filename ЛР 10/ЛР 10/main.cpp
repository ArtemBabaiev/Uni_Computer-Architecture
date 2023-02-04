#include <iostream>
#include <Windows.h>

using namespace std;

extern "C" int Function();

int main() {
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);
	cout<<Function();
	return 0;
}