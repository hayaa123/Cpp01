#ifndef SED_HPP
# define SED_HPP

#include <fstream>
#include <string>
#include <iostream>

void read_and_replace(std::ifstream& ifs, std::string& text,  std::string& s1, std::string& s2);
void create_out_file(std::string& text, const std::string& filename);

#endif