#include <iostream>

int main()
{
    std::cout << "You are a peerless thief, renowed throughout the land for your ability to quietly obtain things which are not yours." << std::endl;
    std::cout << "You have broken into the dungeons of a strange old magician who has chosen to protect his valuables with a series of numerical riddles." << std::endl;
    std::cout << "You must enter the correct codes in order to progress through the dungeon and claim your prize." << std::endl;
    std::cout << "Now get to it! You've a reputation to maintain..." << std::endl;

    const int a = 4;
    const int b = 7;
    const int c = 9;

    const int sum = a + b + c;
    const int product = a * b * c;

    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}