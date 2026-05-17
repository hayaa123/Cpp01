#include "sed.hpp"

void read_and_replace(std::ifstream& ifs, std::string& text,  std::string& s1, std::string& s2)
{
    std::string buffer;
    std::size_t occurrence = std::string::npos;

    while (std::getline(ifs, buffer))
        {
            occurrence = buffer.find(s1);
            while(occurrence != std::string::npos)
            {
                buffer.erase(occurrence, s1.size());
                buffer.insert(occurrence,s2);
                occurrence = buffer.find(s1);
            }
            if(ifs.peek() != EOF)
                buffer+='\n';  
            text = text + buffer;
        }
}

void create_out_file(std::string& text, const std::string& filename)
{
    std::string new_filename = filename + ".replace";
    std::ofstream ofs(new_filename.c_str());
    ofs << text;
    ofs.close();
}