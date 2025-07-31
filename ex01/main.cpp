/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:39:19 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/31 16:00:03 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	//Normal test 
	try
	{
		Bureaucrat b("lanti", 150);
		std:: cout << b << std::endl;

	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;		
	}
	//Should throw exception Grade too HIGH
	try
	{
		Bureaucrat a("Eni", -1);
		std:: cout << a << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;		
	}
	//increment & exception Grade Too high
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
	//Grade too low
	try
	{
		Bureaucrat s("Mr T", 151);
		std::cout << s << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//Decrement -> Grade to low exception
	try
	{
		Bureaucrat p("PD", 150);
		std::cout << p << std::endl;
		p.decrement();
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// Normal values & increment , Decrement
	try
	{
		Bureaucrat m("mark", 10);
		std::cout << m << std::endl;
		m.increment(); //9
		m.increment(); //8
		m.increment(); //7
		m.increment(); //6
		m.increment(); //5
		std::cout << m << std::endl;
		m.decrement(); 
		m.decrement();
		m.decrement();
		m.decrement();
		m.decrement();//10
		std::cout << m << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
    return 0;
}