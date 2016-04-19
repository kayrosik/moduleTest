#pragma once
#ifndef MATR_H
#define MATR_H
#include <fstream> 
#include <string> 
#include <cstring>
#include "MatrixException.h"
using namespace std;

template <typename T>
class Matrix;
 
template <class T>
ostream & operator<<(ostream & output, const Matrix<T> &);

template <class T>
istream & operator>>(istream & input, Matrix<T> &);

template <typename T>
class Matrix {
public:
	Matrix();
	Matrix(int _rows, int _columns);
	Matrix(const Matrix &matrix);
	~Matrix();
	void Get_Matrix(string s);
	void Cout_Matrix();
	Matrix &operator=(const Matrix &matrix);
	Matrix operator +(const Matrix& firstMatrix);
	Matrix operator *(int num);    
	T* operator [](int i);
	int get_rows();
	int get_columns();
	friend std::ostream & operator<< <>(std::ostream & output, const Matrix & matrix);	
	friend std::istream & operator>> <>(std::istream & input, Matrix<T> & matrix);	
private:
	void swap(Matrix & m1);
	string s{};
	int rows{};
	int columns{};
	T **_matrix{};
};
#endif
