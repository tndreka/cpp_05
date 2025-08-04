/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:21:56 by tndreka           #+#    #+#             */
/*   Updated: 2025/08/04 16:29:54 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("Default") 
{
	std::cout << "RobotomyRequestForm Default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target_name) : AForm("RobotomyRequestForm", 72, 45), target(target_name) 
{
	std::cout << "RobotomyRequestForm Parameter constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), target(other.target)
{
	std::cout << "RobotomyRequestForm Copy constructor called\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm Copy Assignment operator called\n";
	if (this != &other)
	{
		AForm::operator=(other);
		target = other.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called\n";
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	//validation .. 
	AForm::execute(executor);
	
	std::cout << "ZZZZZZZZZZZZZZZ! ZZZZZZZZZZZZ!! DRILLING NOISES! ZZZZZZZZZZZZZZZ !!!\n";
	
	// the target should be robotomized 50% of time;
	static int counter = 0;
	counter++;
	
	if (counter % 2 == 0)
		std::cout << target << " has been robotomized successfully \n";
	else
		std::cout << "Robotomy Failed on " << target << " !\n"; 
	
}