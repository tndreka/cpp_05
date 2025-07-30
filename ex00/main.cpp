/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:39:19 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/30 15:25:28 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("lanti", 150);
		std:: cout << b << std::endl;

	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;		
	}
	try
	{
		Bureaucrat a("Eni", -1);
		std:: cout << a << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;		
	}
	try
	{
		Bureaucrat t("lanti", 2);
		std:: cout << t << std::endl;
		t.increment();
		std:: cout << t << std::endl;
		t.increment();
		std:: cout << t << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
    return 0;
}