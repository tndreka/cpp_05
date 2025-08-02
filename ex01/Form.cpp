/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:06:45 by tndreka           #+#    #+#             */
/*   Updated: 2025/08/02 13:22:07 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), isSigned(false), signGrade(0), execGrade(0)
{
	std::cout << "Form Default constructor called\n";	
}

Form::Form(const Form& other)
{
	std::cout << "Form Copy constructor called\n";	
	*this = other;
}

Form& Form::operator=(const Form& other)
{
	std::cout << "Form copy assignment operator called\n";	
	if (this != &other)
	{
	}
	return *this;
}

Form::~Form()
{
	std::cout << "Destructor called\n";		
}

std::string Form::getName() const
{
	return name;
}

bool Form::getSigned() const
{
	return isSigned;
}

int Form::getSignedGrade()
{
	return signGrade;
}

int Form::getExecGrade()
{
	return execGrade;	
}
