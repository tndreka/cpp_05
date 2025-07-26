/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:41:12 by tndreka           #+#    #+#             */
/*   Updated: 2025/07/26 20:57:02 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat
{
    private:
    
    public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat operator=(const Bureaucrat& other);
    ~Bureaucrat();
}

#endif