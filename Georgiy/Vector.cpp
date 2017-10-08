//
//  Vector.cpp
//  Georg
//
//  Created by Андрей Архипов on 08.10.2017.
//  Copyright © 2017 Андрей Архипов. All rights reserved.
//

#include "Vector.hpp"

Vector::Vector() : from(0), to(0), array(NULL)
{
    
}

Vector::Vector(size_t from, size_t to, std::initializer_list<int> values) : from(from), to(to) {
    size_t size = to - from;
    array = new int[size];
    
    auto iter = values.begin();
    
    for (int i = 0; i < to - from; i++) {
        if (i > values.size()) break;
        array[i] = *iter;
        iter++;
    }
    
}

int *Vector::getElement(size_t index) {
    if (index < from || index > to) {
        return NULL;
    } else {
        return &array[index - from];
    }
}

void Vector::add(const Vector &other) {
    if (from == other.from && to == other.to) {
        for (int i = 0; i < to - from; i++) {
            array[i] += other.array[i];
        }
    }
}

void Vector::sub(const Vector &other) {
    if (from == other.from && to == other.to) {
        for (int i = 0; i < to - from; i++) {
            array[i] -= other.array[i];
        }
    }
}

void Vector::divideBy(const int &scalar) { 
    for (int i = 0; i < to - from; i++) {
        array[i] /= scalar;
    }
}


void Vector::multiplyBy(const int &scalar) { 
    for (int i = 0; i < to - from; i++) {
        array[i] *= scalar;
    }
}

void Vector::printArray() { 
    for (int i = 0; i < to - from; i++) {
        std::cout << array[i] << " ";
    }
    
    std::cout << std::endl;
}


void Vector::printElement(size_t index) { 
    std::cout << array[index - from] << std::endl;}










