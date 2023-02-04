#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double result = 0;
	int two = 2;
	int three = 3;
	int five = 5;
	_asm {
		;sin((5 ^ 2) / 2 + 3)
		finit
		fild two				;2
		fild five				;5		2
		fmul st(0), st(0)		;25		2
		fdiv st(0), st(1)		;12.5	2
		fild three				;3		12.5	2
		fadd					;15.5	12.5	2
		fsin					;0.206	12.5	2
		fstp result
	}
	cout << "Результат: " << result;
	return 0;
}