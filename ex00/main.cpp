/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:39:41 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/27 21:39:42 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"


int main() {


/*	std::cout << "\nFreshly initialized ClapTrap Objects:" << std::endl;
	ClapTrap clapTrapA("Handsome Jack Imposter");
	clapTrapA.clap_stats();
	ClapTrap clapTrapB ("Wannabe Vault Hunter");
	clapTrapB.clap_stats();

	std::cout << "\nTesting Name Setter and Getter Functions:" << std::endl;
	ClapTrap clapTrap("Boring Regular ClapTrap");
	std::cout << "Constructed name: " << COLOR_RED << clapTrap.getName() << COLOR_DEFAULT << std::endl;
	clapTrap.setName("Clap Terminator");
	std::cout << "Newly assigned name: " << COLOR_RED << clapTrap.getName() << COLOR_DEFAULT << std::endl;

	std::cout << "\nChanging Stats with Setter and Getter Functions:" << std::endl;
	ClapTrap clapTrapC("Max");
	clapTrapC.clap_stats();
	std::cout << "\nChanging values:" << std::endl;
	clapTrapC.setHitPoints(20);
	clapTrapC.setEnergyPoints(15);
	clapTrapC.setAttackDamage(5);
	clapTrapC.clap_stats();*/

	ClapTrap clapTrap1("CL4P-TP");
	ClapTrap clapTrap2("3V1L-TP");

	clapTrap1.clap_stats();
	clapTrap2.clap_stats();

	clapTrap1.attack(clapTrap2.getName());
	clapTrap2.takeDamage(clapTrap1.getAttackDamage());

	clapTrap1.clap_stats();
	clapTrap2.clap_stats();

	clapTrap1.beRepaired(5);
	clapTrap2.beRepaired(3);

	clapTrap1.clap_stats();
	clapTrap2.clap_stats();

	clapTrap1.attack(clapTrap2.getName());
	clapTrap2.takeDamage(clapTrap1.getAttackDamage());
	clapTrap1.attack(clapTrap2.getName());
	clapTrap2.takeDamage(clapTrap1.getAttackDamage());
	clapTrap1.attack(clapTrap2.getName());
	clapTrap2.takeDamage(clapTrap1.getAttackDamage());
	clapTrap1.attack(clapTrap2.getName());
	clapTrap2.takeDamage(clapTrap1.getAttackDamage());
	clapTrap1.attack(clapTrap2.getName());
	clapTrap2.takeDamage(clapTrap1.getAttackDamage());
	clapTrap1.attack(clapTrap2.getName());
	clapTrap2.takeDamage(clapTrap1.getAttackDamage());
	clapTrap1.attack(clapTrap2.getName());
	clapTrap2.takeDamage(clapTrap1.getAttackDamage());
	clapTrap1.clap_stats();
	clapTrap1.attack(clapTrap2.getName());
	clapTrap2.takeDamage(clapTrap1.getAttackDamage());
	clapTrap1.attack(clapTrap2.getName());
	clapTrap1.clap_stats();

	clapTrap1.setAttackDamage(99);
	clapTrap1.clap_stats();

	clapTrap1.attack(clapTrap2.getName());
	clapTrap2.attack(clapTrap1.getName());
	clapTrap2.beRepaired(3);
	clapTrap2.beRepaired(3);
	clapTrap2.beRepaired(3);
	clapTrap2.beRepaired(3);
	clapTrap2.beRepaired(3);
	clapTrap2.attack(clapTrap1.getName());
	clapTrap2.attack(clapTrap1.getName());
	clapTrap2.attack(clapTrap1.getName());
	clapTrap2.attack(clapTrap1.getName());
	clapTrap2.beRepaired(3);
	clapTrap2.clap_stats();
	clapTrap1.setEnergyPoints(1);
	clapTrap1.attack(clapTrap2.getName());
	clapTrap2.takeDamage(clapTrap1.getAttackDamage());
	clapTrap2.clap_stats();
	clapTrap2.attack(clapTrap2.getName());
	clapTrap2.beRepaired(3);
	return 0;
}
