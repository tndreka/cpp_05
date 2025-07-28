/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:41:06 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/28 14:10:40 by tndreka          ###   ########.fr       */
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

Bureaucrat::Bureaucrat(const std::string& name) : _name(name)
{
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
	grade = n;
}

// const char* Bureaucrat::GradeTooLow::what() const noexcept
// {
// 	if (grade > 150)
// 	{
// 		std::cout << "GradeTooLow" << std::endl;
// 	}
// }