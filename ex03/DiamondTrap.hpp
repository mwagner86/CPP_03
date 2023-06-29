//
// Created by max on 6/29/23.
//

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
