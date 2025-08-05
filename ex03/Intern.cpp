/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:35:27 by tndreka           #+#    #+#             */
/*   Updated: 2025/08/05 15:58:14 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


Intern::Intern()
{
	std::cout<< "Intern Default constructor called" <<std::endl;	
}

Intern::Intern(const Intern& other)
{
	std::cout<< "Intern Copy Constructor called" <<std::endl;
}

Intern& Intern::operator=(const Intern& other)
{
	std::cout<< "Intern Copy assignment operator called" <<std::endl;	
}

Intern::~Intern()
{
	std::cout<< "Intern Destructor called" <<std::endl;	
}

AForm* Intern::makeForm(std::string form_name, std::string form_target) const
{
	
}