//
// Created by max on 6/29/23.
//

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "ScavTrap Constructor called";
	std::cout << std::endl;
}

FragTrap::FragTrap(ScavTrap const & src) : ClapTrap(src)
{
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	std::cout << "Derived Class ScavTrap CopyConstructor called" <<	std::cout << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	if (this != &rhs) {
		setName(rhs.getName());
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setAttackDamage(rhs.getAttackDamage());
		std::cout << "Derived Class FragTrap AssignmentOperator overload called" <<	std::cout << std::endl;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "Derived Class FragTrap Destructor called" << std::endl;
	std::cout << "FragTrap " << COLOR_RED << getName() << COLOR_DEFAULT << " was destroyed" << std::endl;
}

void FragTrap::highFivesGuys() {
	if (getEnergyPoints() < 1) {
		std::cout << "Not enough energy to give high fives!" << std::endl;
		return;
	}
	if (getHitPoints() == 0) {
		std::cout << "Unable to give high fives. No hit points left." << std::endl;
		return;
	}
	std::cout << "FragTrap gives high fives to everyone!" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}


void FragTrap::frag_stats() const {
	std::cout << "Current " << COLOR_GREEN << "FragStats " << COLOR_DEFAULT << "for " << COLOR_RED << this->getName() << COLOR_DEFAULT << ":" << std::endl;
	std::cout << COLOR_YELLOW << "Hit Points: " << COLOR_GREEN << this->getHitPoints() << COLOR_DEFAULT << std::endl;
	std::cout << COLOR_YELLOW << "Energy Points: " << COLOR_GREEN << this->getEnergyPoints() << COLOR_DEFAULT << std::endl;
	std::cout << COLOR_YELLOW << "Attack Damage: " << COLOR_GREEN << this->getAttackDamage() << COLOR_DEFAULT << std::endl;
}
