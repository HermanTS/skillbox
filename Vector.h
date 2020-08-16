/*
 * Vector.h
 *
 *  Created on: 16 авг. 2020 г.
 *      Author: gherman.ts
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

class Vector {
public:
    Vector();
    Vector(float x, float y, float z);

    operator float();
    float operator[](int index);

    friend Vector operator+(const Vector& a, const Vector& b);
    friend Vector operator-(const Vector& a, const Vector& b);
    friend Vector operator*(const Vector& a, int mul);
    friend std::ostream& operator<<(std::ostream& out, const Vector& v);
    friend std::istream& operator>>(std::istream& in, Vector& v);
    

private:
    float x;
    float y;
    float z;
};

#endif /* VECTOR_H_ */
