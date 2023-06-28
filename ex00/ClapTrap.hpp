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

#ifndef EX00_CLAP_TRAP_H
# define EX00_CLAP_TRAP_H

#include <iostream>
#define COLOR_DEFAULT "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"

class ClapTrap {

public:

	ClapTrap();
	ClapTrap(int n);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();

	ClapTrap &			operator=( ClapTrap const & rhs );
	void				setFoo(int value);
	int 				getFoo() const;
	void				setName(std::string name);
	std::string	const & getName() const;

private:

	int 				_foo;
	std::string			_name;

};

std::ostream &		operator<<( std::ostream & o, ClapTrap const & i );

#endif
