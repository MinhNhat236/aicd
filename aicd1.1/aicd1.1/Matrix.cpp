#include"Matrix.h"

template<typename T>
Matrix<T>::Matrix(const Matrix& other) {
	_rows = other._rows;
	_cols = other._cols;
	_data = new T[_rows * _cols];
	for (int i = 0; i < _rows * _cols; i++) {
		_data[i] = other._data[i];
	}
}

template<typename T>
Matrix<T>::Matrix(const int rows, const int cols) {
	_rows = rows;
	_cols = cols;
	_data = new T[rows * cols]{ 0 };
}

template<typename T>
Matrix<T>::~Matrix() {
	delete[] _data;
}

template<typename T>
Matrix<T>& Matrix<T> :: operator=(const Matrix& other) {
	if (this == &other) {
		return *this;
	}
	delete[] _data;
	_rows = other._rows;
	_cols = other._cols;
	_data = new T[_rows * _cols];
	for (int i = 0; i < _rows * _cols; i++) {
		_data[i] = other._data[i];
	}
	return *this;
}

template<typename T>
T& Matrix<T>::operator()(const int row, const int col){
	if (row >= _rows || row < 0 || col >= _cols || col < 0) {
		throw std::out_of_range("Index out of range");
	}
	return _data[row * _cols + col];
}

template class Matrix<int>;
template class Matrix<double>;
template class Matrix<float>;
template class Matrix<std::complex<double>>;
template class Matrix<std::complex<float>>;