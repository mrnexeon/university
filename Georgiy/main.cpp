//
//  main.cpp
//  Georg
//
//  Created by Андрей Архипов on 08.10.2017.
//  Copyright © 2017 Андрей Архипов. All rights reserved.
//

#include <iostream>
#include "Vector.hpp"

int main(int argc, const char * argv[]) {
    
    Vector v1(5, 10, {1, 2, 3, 4, 5});
    v1.printArray(); // 1 2 3 4 5
    
    std::cout << *v1.getElement(7) << std::endl; // 3
    v1.printElement(7); // 3
    
    v1.multiplyBy(2);
    v1.printArray(); // 2 4 6 8 10
    
    v1.divideBy(2);
    v1.printArray(); // 1 2 3 4 5
    
    Vector v2(0, 5, {1, 2, 3, 4, 5});
    v1.add(v2); // Nothing happend
    v1.printArray(); // 1 2 3 4 5
    
    Vector v3(5, 10, {1, 2, 3, 4, 5});
    v1.add(v3);
    v1.printArray(); // 2 4 6 8 10
    
    return 0;
}
