/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:41:12 by tndreka           #+#    #+#             */
/*   Updated: 2025/09/02 14:22:48 by tndreka          ###   ########.fr       */
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
    public:
    	Bureaucrat();
    	Bureaucrat(const Bureaucrat& other);
    	Bureaucrat& operator=(const Bureaucrat& other);
    	~Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
	//Getters
		std::string getName() const;
		int getGrade() const;
	//Setter
		void setGrade(int n);
	//Increment & Decrement
		int increment();
		int decrement();
	//Exception
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const noexcept;		
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const noexcept;		
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
#endif