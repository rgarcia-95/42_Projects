/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:35:49 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/27 11:31:10 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

enum Complains
{
	DEBUG, INFO, WARNING, ERROR
};

class Karen
{
	public:

	Karen(std::string level);
	~Karen();
	int getComplain(std::string level);
	void filter(void);

	private:

	std::string _level;
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif