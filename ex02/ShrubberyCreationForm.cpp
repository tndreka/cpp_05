/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:20:55 by tndreka           #+#    #+#             */
/*   Updated: 2025/08/04 16:01:16 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
: AForm("ShrubberyCreationForm", 145, 137), target("default")
{
	std::cout << "ShrubberyCreationForm Default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target_name) 
: AForm("ShrubberyCreationForm", 145, 137), target(target_name)
{
	std::cout << "ShrubberyCreationForm Parameter constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
: AForm(other), target(other.target)
{
	std::cout << "ShrubberyCreationForm Copy constructor called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called\n";
	if(this != &other)
	{
		AForm::operator=(other);
		target = other.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	//First we call the base class to validate everything before the action executes
	AForm::execute(executor);

	//creating the file_name with the prefix
	std::string file_name = target + "_shrubbery";
	
	//creating the file
	std::ofstream file(file_name);
	
	if (file.is_open())
	{
		file << "	            	  *               \n";
		file << "	            	 _|_                \n";
		file << "	        	   -  | -\n";
		file << "	       	  	 {_   |   _}\n";
		file << "	       	    {~~   |   ~~}   \n";
		file << "	      	   {~~ *     * ~~}\n";
		file << "	      	  {~~ ** | | ** ~~}\n";
		file << "	    	 {~~ *** |~| *** ~~}\n";
		file << "	        {~~ **** |~| **** ~~}\n";
		file << "	   	   {~~ ***** |~| ***** ~~}\n";
		file << "	  	  {~~ ****** |~| ****** ~~}\n";
		file << "	 	 {~~ ******* |~| ******* ~~}\n";
		file << "		{~~ ******** |~| ******** ~~}\n";
		file << "	   {~~ ********* |~| ********* ~~}\n";
		file << "	  {~~ ********** |~| ********** ~~}\n";
		file << "	 {~~ *********** |~| *********** ~~}\n";
		file << "	{~~____________        ___________~~}\n";
		file << "                 |        / \n";
		file << "                 |        |\n";
		file << "                 |        |\n";
		file << "                //        \\ \n";
		file.close();
	}
	else
	{
		std::cout << "Error: could not create the file " << file_name << std::endl;	
	}
}