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

ClapTrap::ClapTrap(std::string name) :	_name(name),
										_hitPoints(_initHitPoints),
										_energyPoints(_initEnergyPoints),
										_attackDamage(_initAttackDamage) {
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &rhs) {

	if ( this != &rhs ) {
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << "Assignment operator overload called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << COLOR_RED << this->_name
				<< COLOR_DEFAULT << " was destroyed"
				<< std::endl;
}

void	ClapTrap::setName(std::string name) {
	this->_name = name;
}

std::string const & ClapTrap::getName() const {
	return (this->_name);
}
