#include <iostream>
#include <fstream>

void replace_s1_s2(std::string& text, std::string& s2, std::string& s1, size_t occurrence);
void create_out_file(std::string& text, const std::string& filename);

int main(int argc, char **argv)
{
    std::string text;
    std::size_t occurrence = std::string::npos;
    if (argc != 4 )
    {
        std::cout << "Programm Usage: ./SedIsForLosers <filename> <s1> <s2>" << std::endl;
        return (1);
    } 
    std::ifstream ifs(argv[1]);
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if(!ifs.good())
    {
        std::cout << argv[1] << " is not found" << std::endl;
        return(1);
    }
    ifs >> text;
    occurrence = text.find(s1);
    while(occurrence != std::string::npos)
    {
        replace_s1_s2(text,s2, s1, occurrence);
        occurrence = text.find(s1);
    }
    create_out_file(text, argv[1]);
    return(1);
}