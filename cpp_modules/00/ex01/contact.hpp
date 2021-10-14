/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:46:34 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/14 14:27:33 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <cctype>
#include <iomanip>
#include <iostream>

class Contact
{
	public:

	Contact();
	~Contact();
	std::string get(std::string str);
	void set(std::string str, std::string value);

	private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif