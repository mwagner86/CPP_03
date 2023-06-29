/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 22:44:15 by mwagner           #+#    #+#             */
/*   Updated: 2023/06/29 22:44:16 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP


class FragTrap : public ClapTrap {

public:
	FragTrap(std::string name);
	FragTrap(ScavTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);
	~FragTrap();
	void 	frag_stats() const;
	void 	highFivesGuys();

};

#endif //EX02_FRAGTRAP_HPP
