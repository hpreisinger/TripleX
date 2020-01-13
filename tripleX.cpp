#include <iostream>

int main()
{
    //prints intro message
    std::cout << "You are a peerless thief, renowed throughout the land for your ability to quietly obtain things which are not yours." << std::endl;
    std::cout << "You have broken into the dungeons of a strange old magician who has chosen to protect his valuables with a series of numerical riddles." << std::endl;
    std::cout << "You must enter the correct codes in order to progress through the dungeon and claim your prize." << std::endl;
    std::cout << "Now get to it! You've a reputation to maintain..." << std::endl;

    //declares three code numbers
    const int CodeA = 4;
    const int CodeB = 7;
    const int CodeC = 9;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // prints sum and product
    std:: cout << std::endl;
    std::cout << "+ There are three numbers in the code." << std:: endl;
    std::cout << "+ The three numbers add up to " << CodeSum << "." << std::endl;
    std::cout << "+ Multiplying the three numbers gives you " << CodeProduct << "." << std::endl;

    int PlayerGuess;

    return 0;
}