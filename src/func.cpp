/*
** EPITECH PROJECT, 2020
** function
** File description:
** groundhog
*/

#include "main.hpp"

bool is_num(const char *s) {
    for (const char *c = s; *c; ++c) {
        if (!std::isdigit(*c)) {
            return false;
        }
    }
    return true;
}

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

void help(char const **argv)
{
    if (argv[1][0] == '-' && argv[1][1] == 'h' && argv[1][2] == '\0')
        std::cout << "SYNOPSIS\n\t./groundhog period\n\nDESCRIPTION\n\tperiod\t\tthe number of days defining a period" << std::endl;
}