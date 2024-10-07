#include <iostream>
#include <limits>

void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    const int SIZE = 10;
    int guesses[SIZE];

    int count = 0;
    for(int i = 0; i < SIZE; i++)
    {
        if(std::cin >> guesses[i])
        {
            count++;
            // input worked
        }
        else
        {
            //invalid character
            break;
        }
    }

    print_array(guesses, count);
    std::cin.clear();
    // std::cin.ignore(10000, '\n');
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string test;
    std::cin >> test;
    std::cout << test << std::endl;

    return 0;
}