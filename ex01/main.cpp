/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:39:44 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/27 21:39:45 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main() {
	ClapTrap clapTrap("Captain Clap");
	ScavTrap scavTrap("Sir Scav");

	clapTrap.clap_stats();
	scavTrap.scav_stats();

	clapTrap.attack(scavTrap.getName());
	clapTrap.attack(scavTrap.getName());
	clapTrap.attack(scavTrap.getName());
	clapTrap.attack(scavTrap.getName());
	clapTrap.attack(scavTrap.getName());
	clapTrap.attack(scavTrap.getName());
	clapTrap.attack(scavTrap.getName());
	clapTrap.attack(scavTrap.getName());
	clapTrap.attack(scavTrap.getName());
	clapTrap.attack(scavTrap.getName());
	clapTrap.attack(scavTrap.getName());
	scavTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(scavTrap.getAttackDamage());
	scavTrap.guardGate();
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.attack("more Enemies");
	scavTrap.beRepaired(1);
	scavTrap.setEnergyPoints(0);
	scavTrap.guardGate();
	clapTrap.clap_stats();
	scavTrap.scav_stats();

	return 0;
}
