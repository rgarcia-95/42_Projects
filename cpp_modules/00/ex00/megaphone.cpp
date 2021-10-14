/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:10:53 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/13 13:33:15 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << (char) toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
}