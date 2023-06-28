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
#define COLOR_YELLOW "\033[33m"

class ClapTrap {

public:

	ClapTrap(std::string name);
	ClapTrap &	operator=(ClapTrap const & rhs);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();

	void attack(const std::string & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void				setName(std::string name);
	std::string	const & getName() const;

private:

	std::string			_name;
	unsigned int		_hitPoints;
	unsigned int		_energyPoints;
	unsigned int		_attackDamage;

	static unsigned int const _initHitPoints = 10;
	static unsigned int const _initEnergyPoints = 10;
	static unsigned int const _initAttackDamage = 0;

};

#endif
