/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 22:46:05 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/29 22:46:07 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_FRAGTRAP_HPP
#define EX03_FRAGTRAP_HPP


class FragTrap : virtual public ClapTrap {

public:
	FragTrap(std::string name);
	FragTrap(ScavTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);
	~FragTrap();
	void 	frag_stats() const;
	void 	highFivesGuys();

};

#endif //EX03_FRAGTRAP_HPP
