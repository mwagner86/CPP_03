//
// Created by max on 6/29/23.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
											 FragTrap(name),
											 ScavTrap(name) {
	setName(name);
	setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "Diamond Derived Class " << COLOR_GREEN << "DiamondTrap Constructor"
			  << COLOR_DEFAULT << " called" << COLOR_DEFAULT << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src) : ClapTrap(src._name + "_clap_name"),
													FragTrap(src._name),
													ScavTrap(src._name) {
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	std::cout 	<< "Diamond Derived Class " << COLOR_GREEN << "DiamondTrap CopyConstructor"
				<< COLOR_DEFAULT << " called" << COLOR_DEFAULT << std::endl;
}


DiamondTrap & DiamondTrap::operator=(const DiamondTrap &rhs) {
	if (this != &rhs) {
		setName(rhs.getName());
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setAttackDamage(rhs.getAttackDamage());
		std::cout 	<< "Derived Class " << COLOR_GREEN << "FragTrap Assignment Operator overload"
					<< COLOR_DEFAULT << " called" << COLOR_DEFAULT << std::endl;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Derived Class ScavTrap Destructor called" << std::endl;
	std::cout << "DiamondTrap " << COLOR_RED << getName() << COLOR_DEFAULT << " was destroyed" << std::endl;
}

void DiamondTrap::setName(std::string name) {
	this->_name = name;
}

std::string	DiamondTrap::getName(void) const {
	return (this->_name);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap Name: " << COLOR_GREEN << getName() << COLOR_DEFAULT << std::endl;
	std::cout << "ClapTrap Name: " << COLOR_GREEN << ClapTrap::getName() << COLOR_DEFAULT << std::endl;
}

void  DiamondTrap::diamond_stats() const {
	std::cout << "Current " << COLOR_GREEN << "DiamondStats " << COLOR_DEFAULT << "for " << COLOR_RED << this->getName() << COLOR_DEFAULT << ":" << std::endl;
	std::cout << COLOR_YELLOW << "Hit Points: " << COLOR_GREEN << this->getHitPoints() << COLOR_DEFAULT << std::endl;
	std::cout << COLOR_YELLOW << "Energy Points: " << COLOR_GREEN << this->getEnergyPoints() << COLOR_DEFAULT << std::endl;
	std::cout << COLOR_YELLOW << "Attack Damage: " << COLOR_GREEN << this->getAttackDamage() << COLOR_DEFAULT << std::endl;
}
