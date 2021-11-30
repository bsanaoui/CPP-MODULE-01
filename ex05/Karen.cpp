#include "Karen.hpp"

void    Karen::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl
                << "I love to get extra bacon for my"
                << " 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" <<  std::endl;
}

void    Karen::info( void )
{
    std::cout << "[ INFO ]" << std::endl
                << "I cannot believe adding extra bacon cost"
                << " more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void    Karen::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl
                << "I think I deserve to have some extra bacon for free. I’ve been"
                << " coming here for years and you just started working here last month.\n" << std::endl;
}

void    Karen::error( void )
{
    std::cout << "[ EROOR ]" << std::endl
                << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

level_enum get_enum (std::string const str)
{
    if (str == "DEBUG") return DEBUG;
    if (str == "INFO") return INFO;
    if (str == "WARNING") return WARNING;
    if (str == "ERROR") return ERROR;
    return (NON_OF_THEM);
}

void    Karen::complain( std::string level )
{  
    typedef void(Karen::*Complains)(void);   // or Complains[4]
    
    Complains complains[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    
    if (get_enum(level) == 4)
        return ;
    (this->*complains[get_enum(level)])() ;
}
