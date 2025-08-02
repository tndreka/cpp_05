/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:06:49 by tndreka           #+#    #+#             */
/*   Updated: 2025/08/02 13:13:42 by tndreka          ###   ########.fr       */
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
	//getters
	std::string getName() const;
	bool getSigned() const;
	int getSignedGrade();
	int getExecGrade();
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

std::ostream& operator<<(std::ostream& f, bool isSigned);
#endif