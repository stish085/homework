// Vector.      Задача 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

int main()
{
    std::cout << "Input vector size:\n";
    int n;
    std::cin >> n;
    std::vector <float> vec(n);
    std::cout << "Input numbers:\n";
    for (int i=0;i<vec.size();i++)
    {
        std::cin >> vec[i];
    }
    std::cout << "Input number to delete: \n";
    int deleteNum;
    std::cin >> deleteNum;
    for (int i = n-1; i > -1; i--)
    {
        if (vec[i] == deleteNum)
        {
            vec.erase(vec.begin() + i);
        }
    }
    std::cout << "A vector with deleted numbers:\n";
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i];
    }
}

