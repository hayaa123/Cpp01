#include <string>
#include <fstream>

void create_out_file(std::string& text, const std::string& filename)
{
    std::string new_filename = filename + ".replace";
    std::ofstream ofs(new_filename.c_str());
    ofs << text;
    ofs.close();
}