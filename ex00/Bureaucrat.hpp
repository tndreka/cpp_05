/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:41:12 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/27 20:45:50 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{   
	private:
	std::string _name;
	int grade;
	// void setName(std::string str);
	// void setGrade(int n);
    public:
    Bureaucrat();
	Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();
	std::string getName();
	int getGrade();
	
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