/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:35:44 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/22 16:55:21 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <iomanip>

class ClapTrap
{
	private:
		std::string 	_name;
		int 			_hitpoints;
		int				_energy_points;
		int				_attack_damage;
		void	_showStats(void) const;

	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &clapTrap);
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap	&operator=(const ClapTrap &clapTrap);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};

#endif