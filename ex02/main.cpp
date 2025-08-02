/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:39:19 by tndreka           #+#    #+#             */
/*   Updated: 2025/08/02 16:26:04 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


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

	std::cout << "================ FORM TEST =================== \n";
	
	std::cout << " ------- TEST 1 -------------\n";
	try
	{
		Bureaucrat john("John", 50);
		Form tax("Tax", 40, 30);
		
		std::cout << john << std::endl;
		std::cout << tax  << std::endl;

		john.signForm(tax);
		std::cout << tax  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << " ------- TEST 2 -------------\n";
	try
	{
		Bureaucrat bond("John", 80);
		Form taxb("Tax", 1, 151);
		
		std::cout << bond << std::endl;
		std::cout << taxb  << std::endl;

		bond.signForm(taxb);
		std::cout << taxb  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << " ------- TEST 3 -------------\n";
	try
	{
		Bureaucrat james("John", 50);
		Form tax_form("Tax", 0, 30);
		
		std::cout << james << std::endl;
		std::cout << tax_form  << std::endl;

		james.signForm(tax_form);
		std::cout << tax_form  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << " ------- TEST 4 -------------\n";
	try
	{
		Bureaucrat jim("John", 50);
		Form bean("Tax", 40, 200);
		
		std::cout << jim << std::endl;
		std::cout << bean  << std::endl;

		jim.signForm(bean);
		std::cout << bean  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << " ------- TEST 5 -------------\n";
	try
	{
		Bureaucrat jack("John", 50);
		Form daniels("Tax", 40, 30);
		
		std::cout << jack << std::endl;
		std::cout << daniels  << std::endl;

		jack.signForm(daniels);
		std::cout << daniels  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << " ------- TEST 6 -------------\n";
	try
	{
		Bureaucrat ceo("CEO", 1);
		Form		boss("BOSS", 50, 50);
		
		std::cout << ceo << std::endl;
		std::cout << boss << std::endl;

		ceo.signForm(boss);
		std::cout << boss << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
    return 0;
}