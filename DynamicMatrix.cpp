/*
 * DynamicMatrix.h
 *
 *  Created on: 16 рту. 2020 у.
 *      Author: gherman.ts
 */


#include "DynamicMatrix.h"
#include <iostream>
#include <cstring>

DynamicMatrix::DynamicMatrix() :
	collums(0), rows(0)
{
	matrixName = new std::string("default");
	allocMemory(collums, rows);
}

DynamicMatrix::DynamicMatrix(int col, int row, const std::string& Name) :
	collums(col), rows(row)
{
	matrixName = new std::string(Name);
	allocMemory(collums, rows);
}

DynamicMatrix::DynamicMatrix(int col, int row, int** data, const std::string& Name):
	collums(col), rows(row)
{
	matrixName = new std::string(Name);
	allocMemory(collums, rows);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < collums; j++)
			array[i][j] = data[i][j];
	}
}


DynamicMatrix::DynamicMatrix(const DynamicMatrix& other):
	collums(other.collums), rows(other.rows)
{
	matrixName = new std::string(*other.matrixName);
	
	allocMemory(collums, rows);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < collums; j++)
			array[i][j] = other.array[i][j];
	}
}


DynamicMatrix& DynamicMatrix::operator=(DynamicMatrix& other)
{
	cleanData();

	matrixName = new std::string(*other.matrixName);
	
	collums = other.collums;
	rows = other.rows;
	
	array = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[collums];
		for (int j = 0; j < collums; j++)
			array[i][j] = other.array[i][j];
	}
	
	return *this;
}

void DynamicMatrix::PrintData()
{
	std::cout << "Matrix " << *matrixName << " " << rows << "x" << collums << "\n";
	for (int i = 0; i < rows; i++)
	{
		std::cout << i + 1 << ": ";
		for (int j = 0; j < collums; j++)
			std::cout << array[i][j] << " ";
		std::cout << "\n";
	}
}

DynamicMatrix::~DynamicMatrix()
{
	cleanData();
}

void  DynamicMatrix::allocMemory(int col, int row)
{
	array = new int* [row];
	for (int i = 0; i < row; i++)
	{
		array[i] = new int[col];
		memset(array[i], 0, sizeof(int) * col);
	}
}

void DynamicMatrix::cleanData()
{
	delete matrixName;

	for (int i = 0; i < rows; i++)
		delete[] array[i];
	
	delete[] array;
}