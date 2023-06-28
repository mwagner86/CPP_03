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

ClapTrap::ClapTrap() {
	std::cout << "Default Constructor called" << std::endl;
	this->_foo = 0;
}
ClapTrap::ClapTrap(int n) {
	std::cout << "Parametric Constructor called" << std::endl;
	this->_foo = n;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _foo() {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::setFoo(int n) {
	this->_foo = n;
}

int			ClapTrap::getFoo() const {
	return this->_foo;
}

void	ClapTrap::setName(std::string name) {
	this->_name = name;
}

std::string const & ClapTrap::getName() const {
	return (this->_name);
}


ClapTrap &	ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "Assignment operator overload called" << std::endl;
	if ( this != &rhs )
		this->_foo = rhs.getFoo();
	return *this;
}

std::ostream &	operator<<( std::ostream & o, ClapTrap const & i ) {
	o << "The value of _foo is : " << i.getFoo();
	return o;
}
