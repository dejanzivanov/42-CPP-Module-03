/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:21:22 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/22 20:47:16 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

FragTrap::FragTrap(void) : ClapTrap("FRAG_TRAP")
{
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << _name << " Frag Trap Constructor Initiatied" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << _name << " Frag Trap Constructor Initiatied" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap)
{
	*this = fragTrap;
	std::cout << _name << " Frag Trap Constructor Initiatied" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << _name << " Frag Trap Destructor Called" << std::endl;
}

/*
**		OVERLOAD OPERATORS
*/

FragTrap	&FragTrap::operator=(const FragTrap &fragTrap)
{
	if (this != &fragTrap)
	{
		this->_name = fragTrap._name;
		this->_hitpoints = fragTrap._hitpoints;
		this->_energy_points = fragTrap._energy_points;
		this->_attack_damage = fragTrap._attack_damage;
	}
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/

void	FragTrap::highFivesGuys(void) const
{
	std::cout << _name << " High Fives Guys! " << std::endl;
}