/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:23:13 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/27 11:34:45 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2 && argv[1])
	{
		Karen	karen(argv[1]);

		std::cout << std::endl;
		karen.filter();
		std::cout << std::endl;
	}
	return (0);
}