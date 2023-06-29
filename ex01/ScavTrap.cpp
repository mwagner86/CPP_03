//
// Created by max on 6/29/23.
//

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap Constructor called";
	std::cout << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	std::cout << "Derived Class ScavTrap CopyConstructor called" <<	std::cout << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	if (this != &rhs) {
		setName(rhs.getName());
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setAttackDamage(rhs.getAttackDamage());
		std::cout << "Derived Class ScavTrap AssignmentOperator overload called" <<	std::cout << std::endl;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "Derived Class ScavTrap Destructor called" << std::endl;
	std::cout << "ScavTrap " << COLOR_RED << getName() << COLOR_DEFAULT << " was destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (getHitPoints() == 0 || getEnergyPoints() == 0) {
		std::cout << "ScavTrap " << COLOR_RED << getName() << COLOR_DEFAULT << " can't attack. No hit or energy points left." << std::endl;
		return;
	}
	if (getEnergyPoints() < 1) {
		std::cout << "ScavTrap " << COLOR_RED << getName() << COLOR_DEFAULT << " can't attack. Not enough energy points." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << COLOR_RED << getName() << COLOR_DEFAULT << " attacks " << COLOR_RED << target << COLOR_DEFAULT
			  << ", causing " << COLOR_YELLOW << getAttackDamage() << COLOR_DEFAULT << " points of damage!" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

void ScavTrap::guardGate() {
	if (getEnergyPoints() == 0) {
		std::cout << "ScavTrap " << COLOR_RED << getName() << COLOR_DEFAULT << " can't go into Gate keeper mode. No energy points left." << std::endl;
		return;
	}
	if (getHitPoints() == 0) {
		std::cout << "ScavTrap " << COLOR_RED << getName() << COLOR_DEFAULT << " can't go into Gate keeper mode. It is destroyed." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << COLOR_RED << getName() << COLOR_DEFAULT << " is now in Gate keeper mode." << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

void ScavTrap::scav_stats() const {
	std::cout << "Current " << COLOR_GREEN << "ScavStats " << COLOR_DEFAULT << "for " << COLOR_RED << this->getName() << COLOR_DEFAULT << ":" << std::endl;
	std::cout << COLOR_YELLOW << "Hit Points: " << COLOR_GREEN << this->getHitPoints() << COLOR_DEFAULT << std::endl;
	std::cout << COLOR_YELLOW << "Energy Points: " << COLOR_GREEN << this->getEnergyPoints() << COLOR_DEFAULT << std::endl;
	std::cout << COLOR_YELLOW << "Attack Damage: " << COLOR_GREEN << this->getAttackDamage() << COLOR_DEFAULT << std::endl;
}
