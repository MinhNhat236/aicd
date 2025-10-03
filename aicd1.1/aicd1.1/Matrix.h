
#pragma once

#include<iostream>
#include<complex>
#include<exception>
#include<random>

template<typename T>
class Matrix {
private:
	int _rows;
	int _cols;
	T* _data;
public:
	Matrix() :_rows(0), _cols(0), _data(nullptr) {};
	Matrix(const int rows, const int cols);
	Matrix(const Matrix& other);
	~Matrix();
	Matrix& operator=(const Matrix& other);
	T& operator()(const int row, const int col);
	Matrix<T> operator+(const Matrix<T>& other) const;
	Matrix<T> operator-(const Matrix<T>& other) const;
	Matrix<T> operator*(const Matrix<T>& other) const;
	const T& operator()(int r, int c) const;
};