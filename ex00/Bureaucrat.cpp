/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:41:06 by tndreka           #+#    #+#             */
/*   Updated: 2025/09/02 14:23:35 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
//DEFAULT CANONICAL FORM
Bureaucrat::Bureaucrat() : _name(""), grade(150)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), grade(other.grade)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		// this->_name = other._name;
		this->grade = other.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

//Parameter Constructor

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	setGrade(grade);
	std::cout << "Bureaucrat Parameter constructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::setGrade(int n)
{
	if (n < 1)
		throw GradeTooHighException();
	else if ( n > 150)
		throw GradeTooLowException();
	grade = n;
}

/*
	!! Exceptions !!
	->An exception is a problem that occours in the execution time of the program.
	->We response to an exception circumstance that happend in the ET(execution time).
	-> Try:
			A block of code that will activate the exceptions;
	-> Catch:
			This will catch the exception that we did in the "try" block of code and redirect to the
			exception handler for the exception cas.
	-> throw: 
			Program throw the exception when the problem shows up.
*/
const char* Bureaucrat::GradeTooLowException::what() const noexcept
{
	return "Grade Too Low";
}

const char* Bureaucrat::GradeTooHighException::what() const noexcept
{
	return "Grade Too High";
}

int Bureaucrat::increment()
{	
	if (grade <= 1)
		throw GradeTooHighException();
	return --grade;
}

int Bureaucrat::decrement()
{
	if (grade >= 150)
		throw GradeTooLowException();
	return ++grade;
}

std::ostream& operator<<(std::ostream& os,const Bureaucrat& b )
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return os;
}