/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:35:46 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/23 21:05:05 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
**	Constructors and Destructor
*/

static int	max_check(int a, int b)
{
	if (a >= b)
	{
		return a;
	}
	return (b);
}

ClapTrap::ClapTrap(void): _name("CLAP_TRAP"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	*this = clapTrap;
	std::cout << "Copy Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string p_name): _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	this->_name = p_name;
	std::cout << "Constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor has been called" << std::endl;
}

/*
**	Overload operator
*/

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
	if(this != &clapTrap)
	{
		this->_name = clapTrap._name;
		this->_hitpoints = clapTrap._hitpoints;
		this->_energy_points = clapTrap._energy_points;
		this->_attack_damage = clapTrap._attack_damage;
	}
	return (*this);
}

/*
**	Member Functions
*/

void	ClapTrap::attack(const std::string &target)
{
	if(_energy_points > 0 && _hitpoints > 0)
	{
		std::cout << this->_name << " I am attacking " << target << " - " << _attack_damage << " attack damage" << std::endl;
		_energy_points -= 1;
	}
	else if(_energy_points > 0)
	{
		std::cout << _name << " impossible to attack he is dead " << std::endl;
	}
	else
	{
		std::cout << _name << " impossible to attack he has no energy left " << std::endl;
	}
	_showStats();
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(_hitpoints > 0)
	{
		std::cout << _name << " has taken hit of " << amount << "HP" << std::endl;
		_hitpoints = max_check(_hitpoints - amount, 0);

		if (_hitpoints)
		{
			std::cout << _name << " is dead." << std::endl;
		}
	}
	else
	{
		std::cout << _name << " impossible to take damage because it is dead." << std::endl;
	}
	_showStats();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(_energy_points > 0 && _hitpoints > 0)
	{
		std::cout << this->_name << " Has gotten +" << amount << " of HP" << std::endl;
		_hitpoints += amount;
		_energy_points -= 1;
	}
	else if(_energy_points > 0)
	{
		std::cout << _name << " can not be repaired because he is dead " << std::endl;
	}
	else
	{
		std::cout << _name << " can not be repaired because he has no energy left" << std::endl;
	}
	_showStats();
}

void	ClapTrap::_showStats(void) const
{
	std::cout << std::setw(5) << _hitpoints << "HP";
	std::cout << std::setw(5) << _energy_points << "EP";
	std::cout << std::setw(5) << _attack_damage << "AD" << std::endl;
}