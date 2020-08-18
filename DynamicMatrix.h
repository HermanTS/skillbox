/*
 * DynamicMatrix.h
 *
 *  Created on: 16 рту. 2020 у.
 *      Author: gherman.ts
 */

#ifndef DYNAMICMATRIX_H_
#define DYNAMICMATRIX_H_

#include <string>

class DynamicMatrix
{
public:
	DynamicMatrix();
	DynamicMatrix(int col, int row, const std::string& Name);
	DynamicMatrix(int col, int row, int** data, const std::string& Name);
	DynamicMatrix(const DynamicMatrix& other);

	DynamicMatrix& operator=(DynamicMatrix& other);

	void PrintData();

	~DynamicMatrix();
private:

	void allocMemory(int col, int row);
	void cleanData();

	std::string* matrixName;
	
	int collums;
	int rows;
	int** array;

};

#endif

