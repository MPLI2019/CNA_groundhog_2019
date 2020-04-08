/*
** EPITECH PROJECT, 2020
** groundhog
** File description:
** CNA_main
*/


#include "main.hpp"

using namespace std;

Groundhog::Groundhog()
{
    this->alert = 0;
}

Groundhog::~Groundhog()
{}


string Groundhog::getArg(char const **argv)
{
    std::string period(argv[1]);
    return (period);
}

int Groundhog::calcul_period(string days)
{
    this->i = 0;
    this->g = 0;
    this->s = 0;
    this->r = 0;
    this->alert = 0;

    while (days != "STOP") {
        cin >> days;
        if (is_number(days) == false && days != "STOP")
            exit (84);
        stringstream geek(days);
        geek >> this->i;
       
        if (days == "STOP") {
            std::cout << "Global tendency switched " << this->i << " times" << std::endl;
            std::cout << "5 weirdest walues are " << std::endl;
            exit(0);
        }
        else {
            std::cout << "g=" << this->g << '\t';
            std::cout << "r=" << this->r << '%' << '\t';
            std::cout << "s=" << this->s << std::endl;
        }
    }
    return 0;
}


int main(int ac, char const *av[])
{
    Groundhog program;

    if (av[1] == NULL)
        return 84;
    if (is_num(av[1]) == false)
        return 84;
    if (ac > 2)
        return 84;
    help(av);
    program.calcul_period(program.getArg(av));
    return 0;
}