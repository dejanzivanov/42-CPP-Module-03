/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:20:36 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/23 16:59:59 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
		DiamondTrap(void);

	public:
		DiamondTrap(const DiamondTrap &diamondTrap);
		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap	&operator=(const DiamondTrap &diamondTrap);

		void	whoAmI(void) const;
		using	ScavTrap::attack;
};

#endif