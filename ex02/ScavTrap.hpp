//
// Created by max on 6/29/23.
//

#ifndef EX02_SCAVTRAP_HPP
#define EX02_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);
	~ScavTrap();
	void 	scav_stats() const;
	void	attack(const std::string & target);
	void	guardGate();
};


#endif //EX02_SCAVTRAP_HPP
