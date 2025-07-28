/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:41:12 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/28 14:10:49 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{   
	private:
	const std::string _name;
	int grade;
	// void setName(std::string str);
	// void setGrade(int n);
    public:
    Bureaucrat();
	Bureaucrat(const std::string& name);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();
	//Getters
	std::string getName() const;
	int getGrade() const;
	//setter
	void setGrade(int n);
	//throw exceptions
	void grade_checker(const Bureaucrat &grade);
	//exception
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
#endif