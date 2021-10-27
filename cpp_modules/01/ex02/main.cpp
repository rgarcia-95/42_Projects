/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:50:12 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/19 13:04:54 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "\nptr = " << ptr << std::endl;
	std::cout << "&ref = " << &ref << std::endl;
	std::cout << std::endl;
	std::cout << "*ptr = " << *ptr << std::endl;
	std::cout << "ref = " << ref << std::endl;
	std::cout << std::endl;
	return (0);
}