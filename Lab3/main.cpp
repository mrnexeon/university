#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "RU");
    
    float x, e;
    
    std::cout << "Введите X: " << std::endl;
    
    std::cin >> x;
    
    std::cout << "Введите точность: " << std::endl;
    
    std::cin >> e;
    
    float res = 0; // Результат
    
    float old = 1.f, add = 0.f;
    
    int i = 1;
    
    while (true)
    {
        add = (3.f * i - 2.f) / (3.f * i);
        
        add *= old;
        
        old = add;
        
        add *= powf(x, i);
        
        if (fabsf(add) < e) {
            break;
        } else {
            if ((i % 2) != 0) res += add;
            else res -= add;
        }
        
        i++;
    }
    
    std::cout << "Результат: " << res << std::endl;
    
    system("pause");
    
    return 0;
}
