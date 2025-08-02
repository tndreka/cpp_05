/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:06:45 by tndreka           #+#    #+#             */
/*   Updated: 2025/08/02 13:46:21 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), isSigned(false), signGrade(150), execGrade(150)
{
	std::cout << "Form Default constructor called\n";	
}

Form::Form(const Form& other) : name(other.name), isSigned(other.isSigned), signGrade(other.signGrade), execGrade(other.execGrade)
{
	std::cout << "Form Copy constructor called\n";	
}

Form& Form::operator=(const Form& other)
{
	std::cout << "Form copy assignment operator called\n";	
	if (this != &other)
	{
		// this->name = other.name;
		this->isSigned = other.isSigned;
		// this->signGrade = other.signGrade;
		// this->execGrade = other.execGrade;
	}
	return *this;
}

Form::Form(const std::string& _name, int sGrade, int eGrade) 
: name(_name), isSigned(false), signGrade(sGrade), execGrade(eGrade)
{
	//check the signed GRADE
	if (sGrade < 1)
		throw GradeTooHigh();
	if (sGrade > 150)
		throw GradeTooLow();
	//check the exec   GRADE
	if (eGrade < 1)
		throw GradeTooHigh();
	if (eGrade > 150)
		throw GradeTooLow();
	std::cout << "Form Parameter Constructor called\n";	
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

int Form::getSignedGrade() const
{
	return signGrade;
}

int Form::getExecGrade() const
{
	return execGrade;	
}

void Form::beSigned(const Bureaucrat& b)
{
	
}

const char* Form::GradeTooHigh::what() const noexcept
{
	return "Grade Too High";
}

const char* Form::GradeTooLow::what() const noexcept
{
	return "Grade Too Low";	
}