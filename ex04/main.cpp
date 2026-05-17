#include "sed.hpp"

int main(int argc, char **argv)
{
    std::string text;
    if (argc != 4 )
    {
        std::cerr << "Programm Usage: ./SedIsForLosers <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    if(argv[1][0] == '\0')
    {
        std::cerr << argv[1] << "Empty file name" << std::endl;
        return(1);
    } 
    std::ifstream ifs(argv[1]);
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if(!ifs.is_open())
    {
        std::cerr << argv[1] << " is not found" << std::endl;
        return(1);
    }
    if(s1.empty())
    {
        std::cerr << "s1 is empty" << std::endl;
        ifs.close();
        return (1);
    }    
    read_and_replace(ifs, text, s1, s2);
    create_out_file(text, argv[1]);
    ifs.close();
    return(0);
}
