//
//  Vector.hpp
//  Georg
//
//  Created by Андрей Архипов on 08.10.2017.
//  Copyright © 2017 Андрей Архипов. All rights reserved.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <iostream>

class Vector {
public:
    
    /* Конструктор по-умолчанию */
    Vector();
    
    /* Задание произвольных границ индексов массива */
    Vector(size_t from, size_t to, std::initializer_list<int> values);
    
    /* Обращение к отдельному элементу массива */
    int* getElement(size_t index);
    
    /* Поэлементное сложение */
    void add(const Vector &other);
    
    /* Поэлементное вычитание */
    void sub(const Vector &other);
    
    /* Умножение на скаляр */
    void multiplyBy(const int &scalar);
    
    /* Деление на скаляр */
    void divideBy(const int &scalar);
    
    /* Вывод элемента с индексом index */
    void printElement(size_t index);
    
    /* Вывод массива */
    void printArray();
    
private:
    int* array;
    size_t from;
    size_t to;
};

#endif /* Vector_hpp */
