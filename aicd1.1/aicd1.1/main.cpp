#include"Matrix.h"

int main() {
	Matrix<int>	a(4, 4);
	a(3, 3) = 9;
	std::cout << a(3, 3);
}