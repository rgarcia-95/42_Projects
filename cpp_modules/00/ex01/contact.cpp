/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:43:52 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/14 14:31:06 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::get(std::string str)
{
	if (!str.compare("first_name"))
		return (first_name);
	else if (!str.compare("last_name"))
		return (last_name);
	else if (!str.compare("nickname"))
		return (nickname);
	else if (!str.compare("phone_number"))
		return (phone_number);
	else if (!str.compare("darkest_secret"))
		return (darkest_secret);
	return (0);
}

void Contact::set(std::string str, std::string value)
{
	if (!str.compare("first_name"))
		first_name = value;
	else if (!str.compare("last_name"))
		last_name = value;
	else if (!str.compare("nickname"))
		nickname = value;
	else if (!str.compare("phone_number"))
		phone_number = value;
	else if (!str.compare("darkest_secret"))
		darkest_secret = value;
}