/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:06:45 by tndreka           #+#    #+#             */
/*   Updated: 2025/08/02 17:35:38 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Default"), isSigned(false), signGrade(150), execGrade(150)
{
	std::cout << "AForm Default constructor called\n";	
}

AForm::AForm(const AForm& other) : name(other.name), isSigned(other.isSigned), signGrade(other.signGrade), execGrade(other.execGrade)
{
	std::cout << "AForm Copy constructor called\n";	
}

AForm& AForm::operator=(const AForm& other)
{
	std::cout << "AForm copy assignment operator called\n";	
	if (this != &other)
	{
		// this->name = other.name;
		this->isSigned = other.isSigned;
		// this->signGrade = other.signGrade;
		// this->execGrade = other.execGrade;
	}
	return *this;
}

AForm::AForm(const std::string& _name, int sGrade, int eGrade) 
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
	std::cout << "AForm Parameter Constructor called\n";	
}

AForm::~AForm()
{
	std::cout << "Destructor called\n";		
}

std::string AForm::getName() const
{
	return name;
}

bool AForm::getSigned() const
{
	return isSigned;
}

int AForm::getSignedGrade() const
{
	return signGrade;
}

int AForm::getExecGrade() const
{
	return execGrade;	
}

void AForm::beSigned(const Bureaucrat& b)
{
	if(b.getGrade() <= signGrade)
		isSigned = true;
	if(b.getGrade() > signGrade)
		throw GradeTooLow();
	
}

const char* AForm::GradeTooHigh::what() const noexcept
{
	return "Grade Too High";
}

const char* AForm::GradeTooLow::what() const noexcept
{
	return "Grade Too Low";	
}

std::ostream& operator<<(std::ostream& os, AForm& f)
{
	
	os << "AForm: " << f.getName(); 
	if (f.getSigned())
		os << " Signed \n";
	else
		os << " Unsigned \n";
	return os;
}