//
// Created by max on 6/29/23.
//

#ifndef EX03_SCAVTRAP_HPP
#define EX03_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);
	~ScavTrap();
	void 	scav_stats() const;
	void	attack(const std::string & target);
	void	guardGate();
};


#endif //EX03_SCAVTRAP_HPP
