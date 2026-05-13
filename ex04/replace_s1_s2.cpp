#include "string" 

void replace_s1_s2(std::string& text, std::string& s2, std::string& s1, size_t occurrence)
{
    std::string new_str = text.substr(0, occurrence);
    new_str += s2;
    new_str += text.substr(occurrence + s1.size(), text.size() - (occurrence + s1.size()));
    text = new_str;
}