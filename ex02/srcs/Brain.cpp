#include "../headers/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = obj;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100 ; i++)
            ideas[i] = other.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain has been destroyed" << std::endl;
}