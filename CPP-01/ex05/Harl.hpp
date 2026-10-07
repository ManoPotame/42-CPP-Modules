#pragma once
#include <iostream>

class Harl
{
	public:
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		void	complain(std::string level);
};

typedef struct PointFunc
{
	std::string	level;
	void(Harl::*levelFunc)(void);
}	T_PointFunc;
