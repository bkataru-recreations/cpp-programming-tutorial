#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void play_game()
{
    int random = rand() % 251;
    std::cout << random << std::endl;

    while (true)
    {
        int guess;
        std::cin >> guess;
        
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