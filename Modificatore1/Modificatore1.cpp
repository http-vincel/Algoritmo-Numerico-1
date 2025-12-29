#include <iostream>
#include <vector>

int main(int argc, char* argv[])
{
    
    
    std::vector<int> numeri = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    
    // Aggiunge uno 0 ai numeri pari
    for (int& numero : numeri)
    {
        if (numero % 2 == 0)
        {
            numero *= 10;
        }
    }
    
    for (int numero: numeri)
    {
        std::cout<<numero<<std::endl;
    }
    
    
    
    
    
    // Toglie uno 0 ai numeri pari
    for (int& numero : numeri)
    {
        if (numero % 2 == 0)
        {
            numero /= 10;
        }
    }
    
    for (int numero: numeri)
    {
        std::cout<<numero<<std::endl;
    }
    
   
    
    
    return 0;
}
