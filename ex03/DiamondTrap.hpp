/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 22:45:51 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/29 22:45:53 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_DIAMONDTRAP_HPP
#define EX03_DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public:

	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & src);
	DiamondTrap & operator=(DiamondTrap const & rhs);
	~DiamondTrap();
	void	setName(std::string name);
	std::string	getName(void) const;
	void 	diamond_stats() const;
	void whoAmI();

private:

	std::string	_name;
};


#endif //EX03_DIAMONDTRAP_HPP
