#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "RU");
    
    int a[2][10];
    
    srand(time(0));
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = -5 + (rand() % 11);
        }
    }
    
    int x, y, n;
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            x = a[0][j];
            y = a[1][j];
            
            if      (y > 0 && x > 0) n = 1;
            else if (y > 0 && x < 0) n = 2;
            else if (y < 0 && x < 0) n = 3;
            else if (y < 0 && x > 0) n = 4;
            
            std::cout << "Точка (" << x << ", " << y << ") принадлежит четверти " << n << std::endl;
        
        }
    }
    
    system("pause");
    
    return 0;
}
