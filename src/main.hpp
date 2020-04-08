/*
** EPITECH PROJECT, 2020
** include 
** File description:
** Grounhdog
*/
#ifndef Grounhdog
#define Grounhdog
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class Groundhog
{
    public:
        Groundhog(void);
        ~Groundhog(void);
        int calcul_period(std::string);
        std::string getArg(char const **);

    private:
        char data[200];
        std::vector<double> liste;
        int i;
        int last_r;
        float g;
        float s;
        int r;
        int alert;
};

void help(char const **);
bool is_num(const char *s);
bool is_number(const std::string& s);

#endif /* !Grounhdog */
