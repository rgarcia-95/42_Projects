/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:44:17 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/14 14:43:43 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int				is_number(std::string str)
{
	int	i = 0;

	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

std::string		replace_str(std::string str)
{
	if (str.length() > 10)
		return (str.replace(9, str.length() - 9, "."));
	return (str);
}

int				show(int index, Contact *contacts)
{
	int	i = 0;

	if (index > 0)
	{
		std::cout << "|" << std::setfill(' ') << std::setw(10) << "Index";
		std::cout << "|" << std::setfill(' ') << std::setw(10) << "First Name";
		std::cout << "|" << std::setfill(' ') << std::setw(10) << "Last Name";
		std::cout << "|" << std::setfill(' ') << std::setw(10) << "Nickname";
		std::cout << "|" << std::endl;
		std::cout << std::setfill('-') << std::setw(45) << "" << std::endl;
		while (i < index)
		{
			std::cout << "|" << std::setfill(' ') << std::setw(10) << i + 1;
			std::cout << "|" << std::setfill(' ') << std::setw(10) << replace_str(contacts[i].get("first_name"));
			std::cout << "|" << std::setfill(' ') << std::setw(10) << replace_str(contacts[i].get("last_name"));
			std::cout << "|" << std::setfill(' ') << std::setw(10) << replace_str(contacts[i].get("nickname"));
			std::cout << "|" << std::endl;
			i++;
		}
	}
	else
		std::cout << "* Your Phonebook is empty. Add a contact! *" << std::endl;
	return (i);
}

void			search(int index, Contact *contacts)
{
	int			i = 0;
	int			j = 0;
	std::string	aux;

	i = show(index, contacts);
	if (i > 0)
	{
		std::cout << "\nChoose the index of the contact you want to see: ";
		std::getline(std::cin, aux);
		if (is_number(aux))
		{
			j = std::stoi(aux) - 1;
			if (j >= 0 && j < index)
			{
				std::cout << "\nFirst name: " << contacts[j].get("first_name");
				std::cout << "\nLast name: " << contacts[j].get("last_name");
				std::cout << "\nNickname: " << contacts[j].get("nickname");
				std::cout << "\nPhone number: " << contacts[j].get("phone_number");
				std::cout << "\nDarkest secret: " << contacts[j].get("darkest_secret") << std::endl;
			}
			else
				std::cout << "\n* Invalid index! *" << std::endl;
		}
		else
			std::cout << "\n* Invalid index! *" << std::endl;
	}
}

void			create(Contact *contact, std::string text, std::string str)
{
	std::string	value;

	while (1)
	{
		std::cout << text;
		std::getline(std::cin, value);
		if (value.length() > 0)
			break ;
		else
			std::cout << "\n* Empty field! Try again *\n" << std::endl;
	}
	contact->set(str, value);
}

Contact			add()
{
	Contact	contact;

	create(&contact, "First name: ", "first_name");
	create(&contact, "Last name: ", "last_name");
	create(&contact, "Nickname: ", "nickname");
	create(&contact, "Phone number: ", "phone_number");
	create(&contact, "Darkest secret: ", "darkest_secret");
	std::cout << "\nContact added!" << std::endl;
	return (contact);
}

int				main(void)
{
	int			i = 0;
	int			j = 0;
	std::string	input;
	Contact		contacts[8];

	std::cout << "\n=====  Welcome to your Phonebook!  =====" << std::endl;
	while (1)
	{
		std::cout << "\n Write ADD, SEARCH or EXIT -> ";
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (!input.compare("ADD"))
		{
			if (i < 8)
			{
				contacts[i] = add();
				i++;
			}
			else
			{
				if (j == 8)
					j = 0;
				contacts[j] = add();
			}
			j++;
		}
		else if (!input.compare("SEARCH"))
			search(i, contacts);
		else if (!input.compare("EXIT"))
		{
			std::cout << "=====  Closing Phonebook...  =====\n" << std::endl;
			exit (0);
		}
	}
	return (0);
}