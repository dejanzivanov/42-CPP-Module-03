/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:35:47 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/23 21:06:30 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#define SIZE 52

static void	printTitle(std::string title, bool toUpper = true)
{
	static int		first;
	std::string		toPrint;
	unsigned int	size = (SIZE > 10 ? SIZE : 10);
	char			c = '=';
	unsigned int	n;

	if (first > 0)
		std::cout << std::endl;
	else
		first++;

	toPrint = " " + title + " ";
	if (toUpper)
	{
		for (int i = 0; toPrint[i]; i++)
			toPrint[i] = toupper(toPrint[i]);
	}
	n = toPrint.size();
	if (n > size)
	{
		toPrint = toPrint.substr(0, size - 2);
		toPrint[size - 4] = '.';
		toPrint[size - 3] = ' ';
		n = toPrint.size();
	}
	std::cout << std::setfill(c) << std::setw(size) << "" << std::endl;
	std::cout << std::setw(size / 2) << toPrint.substr(0, n / 2);
	std::cout << toPrint.substr(n / 2, n - n / 2);
	std::cout << std::setfill(c) << std::setw(size - size / 2 - n + n / 2) << "" << std::endl;
	std::cout << std::setfill(c) << std::setw(size) << "" << std::endl;
	std::cout << std::setfill(' ');
}


int	main(void)
{
	{
		printTitle("testing member functions");
		ClapTrap	clapTrap1("Clappy");
		ClapTrap	clapTrap2("Trappy");
		ClapTrap	clapTrap3;

		clapTrap3 = clapTrap1;
		clapTrap2.attack("random human");
		clapTrap1.takeDamage(5);
		clapTrap1.takeDamage(3);
		clapTrap1.beRepaired(10);
		clapTrap1.takeDamage(50);
		clapTrap1.beRepaired(100);
		clapTrap1.takeDamage(50);
		clapTrap1.attack("random human");
	}
	{
		printTitle("running out of energy");
		ClapTrap	clapTrap1;

		clapTrap1.attack("random human");
		clapTrap1.attack("random human");
		clapTrap1.attack("random human");
		clapTrap1.attack("random human");
		clapTrap1.attack("random human");
		clapTrap1.attack("random human");
		clapTrap1.beRepaired(1);
		clapTrap1.beRepaired(1);
		clapTrap1.beRepaired(1);
		clapTrap1.beRepaired(1);
		// no energy left
		clapTrap1.beRepaired(1);
		clapTrap1.attack("random human");
		clapTrap1.takeDamage(10);
	}
	return (0);
}