/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:39:46 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/27 21:39:47 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ClapTrap clapTrap("Captain Clap");
	clapTrap.clap_stats();
	ScavTrap scavTrap("Sergeant Scav");
	scavTrap.scav_stats();
	FragTrap fragTrap("Field Marshal Frag");
	fragTrap.frag_stats();
	fragTrap.attack("Bad Guys");

	fragTrap.highFivesGuys();
	fragTrap.frag_stats();

	std::cout << std::endl;

	return 0;
}
