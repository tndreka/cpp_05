/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:06:49 by tndreka           #+#    #+#             */
/*   Updated: 2025/08/01 14:34:27 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>


class Form
{
private:
	const std::string name;
	bool  isSigned;
	const int  signGrade;
	const int  execGrade;
public:
	Form();
	Form(const Form& other);
	Form& operator=(const Form& other);
	~Form();
	void beSigned(const Bureaucrat& b);
	
	std::string getName();
	bool isSigned();
	int getSignedGrade();
	int getExecGrade();

	class GradeTooHigh : public std::exception
	{
		
	};
	class GradeTooHigh : public std::exception
	{
		
	};
};

std::ostream& operator<<(std::ostream& f, bool isSigned);
#endif