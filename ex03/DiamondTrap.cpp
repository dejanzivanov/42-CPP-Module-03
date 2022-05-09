/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:22:08 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/25 10:54:43 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "DiamondTrap.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

DiamondTrap::DiamondTrap(void) :
	ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Diamond Trap Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) :
	ClapTrap(diamondTrap), ScavTrap(diamondTrap), FragTrap(diamondTrap)
{
	*this = diamondTrap;
	std::cout << "Diamond Trap Copy Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name")
{
	_name = name;
	_hitpoints = FragTrap::_hitpoints;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << _name << " Diamond Trap Inheritance Constructor Called" << std::endl;

}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << this->_name << " Diamond Trap Destructor Called" << std::endl;
}

/*
**		OVERLOAD OPERATORS
*/

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
	if (this != &diamondTrap)
	{
		this->_name = diamondTrap._name;
		this->_hitpoints = diamondTrap._hitpoints;
		this->_energy_points = diamondTrap._energy_points;
		this->_attack_damage = diamondTrap._attack_damage;
	}
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "My name is " << _name << " and my clapName " << ClapTrap::_name << "!" << std::endl;
}