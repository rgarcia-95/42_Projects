/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:10:11 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/20 11:39:00 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

void		error(std::string str)
{
	std::cerr << "\n* Error - " << str << "*\n" << std::endl;
}

std::string	my_replace(std::string str, std::string s1, std::string s2)
{
	int			j;
	int			size = s1.length();
	std::string	aux = "";

	for (int i = 0; i < str.length(); i++)
	{
		j = 0;
		while (str[i + j] == s1[j] && j < size)
			j++;
		if (j == size)
		{
			aux.append(s2);
			i += (j - 1);
		}
		else
			aux.append(str, i, 1);
	}
	return (aux);
}

int			main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string		str;
		std::ifstream	inFile (argv[1]);
		std::ofstream	outFile ("outputFile.replace");

		if (inFile.is_open())
		{
			if (outFile.is_open())
			{
				while (getline(inFile, str))
					outFile << my_replace(str, argv[2], argv[3]) << "\n";
				outFile.close();
				inFile.close();
			}
			else
				error("Output File cannot be opened");
		}
		else
			error("Input File cannot be opened");
	}
	else
		error("Invalid number of arguments");
	return (0);
}