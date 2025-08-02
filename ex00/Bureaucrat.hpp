/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:41:12 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/27 21:43:12 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
    private:
        std::string name;
        int grade;
        // int highest_grade;
        // int lowest_grade;
    public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat operator=(const Bureaucrat& other);
    ~Bureaucrat();
    //Getters & setters
    std::string getName();
    int getGrade();
    //exceptions
    class gradeTooLow : public std::string exceptions
    {
        public:
        virtual
    }; 
}

#endif