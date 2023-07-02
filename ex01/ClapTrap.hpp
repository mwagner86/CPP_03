/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:43:09 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/29 22:43:24 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_CLAP_TRAP_H
# define EX01_CLAP_TRAP_H

#include <iostream>
#include <string>
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

	virtual void 		attack(const std::string & target);
	void 				takeDamage(unsigned int amount);
	void 				beRepaired(unsigned int amount);
	void 				clap_stats() const;
	// Setter and Getter functions for the private variables.
	void				setName(std::string name);
	std::string	const & getName() const;
	void 				setHitPoints(unsigned int value);
	unsigned int 		getHitPoints() const;
	void				setEnergyPoints(unsigned int value);
	unsigned int 		getEnergyPoints() const;
	void 				setAttackDamage(unsigned int value);
	unsigned int 		getAttackDamage() const;

protected:

	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

};

#endif
