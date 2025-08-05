/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:35:27 by tndreka           #+#    #+#             */
/*   Updated: 2025/08/05 16:37:37 by tndreka          ###   ########.fr       */
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
	(void)other;
	std::cout<< "Intern Copy Constructor called" <<std::endl;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	std::cout<< "Intern Copy assignment operator called" <<std::endl;
	return *this;
}

Intern::~Intern()
{
	std::cout<< "Intern Destructor called" <<std::endl;	
}

AForm* Intern::makeForm(std::string form_name, std::string form_target) const
{
	std::string forms[3] = {"Shrubbery Creation", "Presidential Pardon", "Robotomy Request"};
	int flag = -1;

	//check if we encounter one of the forms;
	/*
		-1 + ((the form_name == forms[i] return 0 or 1) + (0, 1, 2 + 1)
	*/
	for (int i = 0; i < 3; i++)
	{
		flag = flag +((form_name == forms[i]) * (i + 1));
	}
	switch (flag)
	{
	case 1:
		return new ShrubberyCreationForm(form_target);
	case 2:
		return new PresidentialPardonForm(form_target);
	case 3:
		return new RobotomyRequestForm(form_target);
	default: return nullptr;
	}
}