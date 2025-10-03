#include"Matrix.h"

int main() {
	Matrix<int>	a(3, 3), b(3, 3);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int x;
			std::cin >> x;
			a(i, j) = x;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int x;
			std::cin >> x;
			b(i, j) = x;
		}
	}
	Matrix<int> c = a * b;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << c(i, j) << " ";
		}
		std::cout << "\n";
	}
}