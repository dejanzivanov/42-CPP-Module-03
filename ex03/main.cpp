/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:35:47 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/23 17:01:20 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diamondTrap("Halfy");

	diamondTrap.whoAmI();
	diamondTrap.attack("random human");
	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();
	diamondTrap.takeDamage(20);
	diamondTrap.beRepaired(10);
	diamondTrap.takeDamage(100);

	return (0);
}