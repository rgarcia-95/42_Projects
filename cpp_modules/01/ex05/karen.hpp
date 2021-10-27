/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:06:54 by rgarcia-          #+#    #+#             */
/*   Updated: 2021/10/20 13:11:46 by rgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

class Karen
{
	public:

	Karen();
	~Karen();
	void complain(std::string level);

	private:

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif