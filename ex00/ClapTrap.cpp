/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:43:17 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/27 21:43:21 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name) {
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << "ClapTrap CopyConstructor called" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &rhs) {

	if ( this != &rhs ) {
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << "ClapTrap AssignmentOperator overload called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor Called" << "\nClapTrap " << COLOR_RED << this->_name
				<< COLOR_DEFAULT << " was destroyed"
				<< std::endl;
}

void	ClapTrap::setName(std::string name) {
	this->_name = name;
}

std::string const & ClapTrap::getName() const {
	return (this->_name);
}

void ClapTrap::setHitPoints(unsigned int value) {
	this->_hitPoints = value;
}

unsigned int ClapTrap::getHitPoints() const {
	return this->_hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int value) {
	this->_energyPoints = value;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int value) {
	this->_attackDamage = value;
}

unsigned int ClapTrap::getAttackDamage() const {
	return this->_attackDamage;
}

void ClapTrap::clap_stats() const {
	std::cout << "Current " << COLOR_GREEN << "ClapStats " << COLOR_DEFAULT
			  << "for " << COLOR_RED << getName() << COLOR_DEFAULT << ":" << std::endl;
	std::cout << COLOR_YELLOW << "Hit Points: " << COLOR_GREEN << getHitPoints() << COLOR_DEFAULT << std::endl;
	std::cout << COLOR_YELLOW << "Energy Points: " << COLOR_GREEN << getEnergyPoints() << COLOR_DEFAULT << std::endl;
	std::cout << COLOR_YELLOW << "Attack Damage: " << COLOR_GREEN << getAttackDamage() << COLOR_DEFAULT << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints == 0 || this->_energyPoints == 0) {
		std::cout << "ClapTrap " << COLOR_RED << this->_name << COLOR_DEFAULT << " can't attack. No hit or energy points left." << std::endl;
		return;
	}
	if (_energyPoints < 1) {
		std::cout << "ClapTrap " << COLOR_RED << this->_name << COLOR_DEFAULT << " can't attack. Not enough energy points." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << COLOR_RED << this->_name << COLOR_DEFAULT << " attacks " << COLOR_RED << target << COLOR_DEFAULT
			  << ", causing " << COLOR_YELLOW << this->_attackDamage << COLOR_DEFAULT << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << COLOR_RED << _name << COLOR_DEFAULT << " is already destroyed." << std::endl;
		return;
	}
	if (amount >= this->_hitPoints) {
		std::cout << "ClapTrap " << COLOR_RED << this->_name << COLOR_DEFAULT << " takes " << COLOR_YELLOW << this->_hitPoints << COLOR_DEFAULT
				  << " points of damage and is destroyed." << std::endl;
		this->_hitPoints = 0;
	} else {
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << COLOR_RED << _name << COLOR_DEFAULT << " takes " << COLOR_YELLOW << amount << COLOR_DEFAULT
				  << " points of damage. " << COLOR_GREEN << this->_hitPoints << COLOR_DEFAULT << " hit points remaining." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << COLOR_RED << this->_name << COLOR_DEFAULT << " is destroyed. Cannot be repaired." << std::endl;
		return;
	}
	if (_energyPoints < 1) {
		std::cout << "ClapTrap " << COLOR_RED << this->_name << COLOR_DEFAULT << " can't be repaired. Not enough energy points." << std::endl;
		return;
	}
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << COLOR_RED << this->_name << COLOR_DEFAULT << " is repaired and gains " << COLOR_YELLOW << amount << COLOR_DEFAULT
			  << " hit points. " << COLOR_GREEN << this->_hitPoints << COLOR_DEFAULT << " hit points now." << std::endl;
	this->_energyPoints -= 1;
}
