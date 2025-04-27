// Vector. Задача 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>


std::vector<int> add(std::vector<int> vec, int val)
{
    vec.resize(vec.size() + 1);
    vec[vec.size() - 1] = val;
    return vec;
}

std::vector<int> circul(std::vector<int> & vec ,int help)
{
    vec.erase(vec.begin());
    vec.push_back(help);

    return vec;
}


int main()
{
    std::cout << "To complete the program, enter -2\n";
    std::cout << "to complete the number entry, enter -1\n";
    std::vector<int> db(20);
   int co = -1;
    int helpVariable;
    do
    {
        co++;
        std::cout << "input number:\n"; 
        std::cin >> helpVariable;
        
        if (co > 19 && helpVariable != -1)
        {
            circul(db, helpVariable);
        }
        else if(co < 20 && helpVariable != -1)
        {
            db[co] = helpVariable;
        }
        else if(helpVariable == -1)
        {  
            
                co = co<20 ? co-1 : co+0;
            
            std::cout << "output: ";
            for (int i=0;i<db.size();i++)
            {
                std::cout << db[i];
            }
        }
    } while (helpVariable != -2);
    std::cout << "Gooodbuy)))\n";
}




