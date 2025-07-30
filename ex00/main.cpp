/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:39:19 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/30 15:07:11 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("lanti", 150);
		std:: cout << "Name : " << b.getName() << std::endl;
		std::cout << "GRADE: " << b.getGrade() << std::endl;

	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;		
	}
	try
	{
		Bureaucrat a("Eni", -1);
		std:: cout << "Name : " << a.getName() << std::endl;
		std::cout << "GRADE: " << a.getGrade() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;		
	}
	try
	{
		Bureaucrat t("lanti", 2);
		std:: cout << "Name : " << t.getName() << std::endl;
		std::cout << "GRADE: " << t.getGrade() << std::endl;
		t.increment();
		std::cout << "GRADE: " << t.getGrade() << std::endl;
		t.increment();
		std::cout << "GRADE: " << t.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
    return 0;
}