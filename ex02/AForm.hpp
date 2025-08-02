/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:06:49 by tndreka           #+#    #+#             */
/*   Updated: 2025/08/02 17:39:37 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>


class AForm
{
private:
	const std::string name;
	bool  isSigned;
	const int  signGrade;
	const int  execGrade;
public:
	AForm();
	AForm(const AForm& other);
	AForm& operator=(const AForm& other);
	virtual ~AForm();
	AForm(const std::string& _name, int sGrade, int eGrade);
	void beSigned(const Bureaucrat& b);
	//Pure virtual function 
	virtual void execute(Bureaucrat const &executor) const = 0;
	//getters
	std::string getName() const;
	bool getSigned() const;
	int getSignedGrade() const;
	int getExecGrade() const;
	//exception class
	class GradeTooHigh : public std::exception
	{
		public:
			virtual const char* what() const noexcept;	
	};
	class GradeTooLow : public std::exception
	{
		public:
			virtual const char* what() const noexcept;	
	};
};

std::ostream& operator<<(std::ostream& os, AForm& f);
#endif