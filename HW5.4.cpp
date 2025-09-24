#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int mass[10] = { 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };


    std::cout << "Массив до сортировки: " << std::endl;

    for (int i = 0; i < 10; i++)
    {
        if (i < 9)
            std::cout << mass[i] << " ,";
        else
            std::cout << mass[i];
    }


    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 9; j++) 
        {
            if (mass[j] > mass[j + 1]) 
            {
                int b = mass[j];
                mass[j] = mass[j +1];
                mass[j + 1] = b;
            }
        }
    }

    std::cout << std::endl << "Массив после сортировки: " << std::endl;

    for (int i = 0; i < 10; i++)
    {
        if (i < 9)
            std::cout << mass[i] << " ,";
        else
            std::cout << mass[i];
    }

    return EXIT_SUCCESS;
}
