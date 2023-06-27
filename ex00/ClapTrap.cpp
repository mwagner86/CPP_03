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

#include "TemplateClass.hpp"

#include <iostream>

Template::Template() {
	std::cout << "Default Constructor called" << std::endl;
	this->_foo = 0;
}
Template::Template(int n) {
	std::cout << "Parametric Constructor called" << std::endl;
	this->_foo = n;
}

Template::Template(Template const &src) : _foo() {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Template::~Template() {
	std::cout << "Destructor called" << std::endl;
}

void	Template::setFoo(int n) {
	this->_foo = n;
}

int			Template::getFoo() const {
	return this->_foo;
}

void	Template::setName(std::string name) {
	this->_name = name;
}

std::string const & Template::getName() const {
	return (this->_name);
}


Template &	Template::operator=(Template const &rhs) {
	std::cout << "Assignment operator overload called" << std::endl;
	if ( this != &rhs )
		this->_foo = rhs.getFoo();
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Template const & i ) {
	o << "The value of _foo is : " << i.getFoo();
	return o;
}
