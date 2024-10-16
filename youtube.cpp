#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

void print_vector(std::vector<int> vector)
{
    for(int i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << "\t";
    }
    std::cout << std::endl;
}

void play_game()
{   
    std::vector<int> guesses;

    int random = rand() % 251;
    std::cout << random << std::endl;

    while (true)
    {
        int guess;
        std::cin >> guess;
        
        guesses.push_back(guess);

        if (guess == random)
        {
            std::cout << "you win" << std::endl;
            break;
        } 
        else if (guess < random)
        {
            std::cout << "too low" << std::endl;
        }
        else
        {
            std::cout << "too high" << std::endl;
        }
    }
    print_vector(guesses);
}

int main()
{
    srand(time(NULL));
    int choice;

    do {
        std::cout << "0. Quit" << std::endl << "1. Play Game" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
            case 0:
                std::cout << "bye" << std::endl;
                return 0;
            case 1:
                play_game();
                break;
        }
    } while (choice != 0);


}