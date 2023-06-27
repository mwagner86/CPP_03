/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:43:09 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/27 21:43:12 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_CLASS_H
# define TEMPLATE_CLASS_H

#include <iostream>
#define COLOR_DEFAULT "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"

class Template {

public:

	Template();
	Template(int n);
	Template(Template const & src);
	~Template();

	Template &			operator=( Template const & rhs );
	void				setFoo(int value);
	int 				getFoo(void) const;
	void				setName(std::string name);
	std::string	const & getName(void) const;

private:

	int 				_foo;
	std::string			_name;

};

std::ostream &		operator<<( std::ostream & o, Template const & i );

#endif
