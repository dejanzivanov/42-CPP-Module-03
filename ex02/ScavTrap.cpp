/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:20:08 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/25 10:48:49 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
**		CONSTRUCTORS AND DESTRUCTOR
*/

ScavTrap::ScavTrap(void) : ClapTrap("SCAV_TRAP")
{
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << _name << " Scavtrap Constructor initiated" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << _name << " Scavtrap Constructor initiated" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap)
{
	*this = scavTrap;
	std::cout << _name << " Scavtrap Copy Constructor initiated" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << _name << " Scavtrap Destructor called" << std::endl;
}

/*
**		OVERLOAD OPERATORS
*/

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavTrap)
{
	if (this != &scavTrap)
	{
		this->_name = scavTrap._name;
		this->_hitpoints = scavTrap._hitpoints;
		this->_energy_points = scavTrap._energy_points;
		this->_attack_damage = scavTrap._attack_damage;
	}
	return (*this);
}

/*
**		MEMBER FUNCTIONS
*/

void	ScavTrap::guardGate(void) const
{
	std::cout << _name << " Gate keeper mode activated!" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_energy_points > 0 && _hitpoints > 0)
	{
		std::cout << _name << " Take that " << target << "! (-" << _attack_damage << "HP)" << std::endl;
		_energy_points -= 1;
	}
	else if (_energy_points > 0)
	{
		std::cout << _name << " can not attack he is dead" << std::endl;
	}
	else
	{
		std::cout << _name << " can not attack he has no energy left" << std::endl;
	}
}