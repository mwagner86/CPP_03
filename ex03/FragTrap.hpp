//
// Created by max on 6/29/23.
//

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
