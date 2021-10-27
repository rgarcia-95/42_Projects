/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:36:42 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/27 11:41:14 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

Karen::Karen(std::string level) : _level(level)
{
}

Karen::~Karen()
{
}

int Karen::getComplain(std::string level)
{
	std::string	complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (!level.compare(complains[i]))
			return (i);
	return (-1);
}

void Karen::filter(void)
{
	switch (getComplain(_level))
	{
		case -1:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
		default:
			break ;
	}
}

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	std::cout << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.." << std::endl;
	std::cout << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.." << std::endl;
}