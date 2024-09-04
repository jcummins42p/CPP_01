/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:40:44 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/04 13:16:04 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void	subline(char **argv, std::string line, std::ofstream &fout)
{
	std::string			word;
	std::istringstream	iss(line);

	while(iss >> word)
		word == argv[2] ? fout << argv[3] : fout << word;
	fout << std::endl;
}

void	sedstitute(char **argv)
{
	std::ofstream		fout;	// file to write to
	std::ifstream		fin;	// file to read from
	std::string			line;	//	line read from file, to modify
	std::string			outfile = std::string(argv[1]) + ".replace";

	fin.open(argv[1], std::ios::in | std::ios::app);
	fout.open(outfile.c_str(), std::ios::out | std::ios::trunc);

	while (getline(fin, line))
		subline(argv, line, fout);
	fout.close();
	fin.close();
}

int test_file(char *file)
{
	std::ifstream test(file);
	if (!test)
		return std::cerr
			<< "Error: The specified file cannot be found"
			<< std::endl, 1;
	return (0);
}

int	check_args(int argc)
{
	if (argc != 4)
		return std::cerr
			<< "Error: This program requires three arguments exactly"
			<< std::endl, 1;
	return (0);
}

int	main(int argc, char *argv[])
{
	(void)argv;
	if (check_args(argc))
		return (1);
	if (test_file(argv[1]))
		return (1);
	sedstitute(argv);
	return (0);
}
