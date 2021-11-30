#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[])
{
    // ----------------   Check Errors --------------------- //

    if (argc != 4)
    {
        std::cout << "Error ! Please specifiy a File, String1 and String2" << std::endl;
        return (0);
    }
    else if (*argv[2] == '\0' || *argv[3] == '\0')
    {
        std::cout << "Error ! String is empty" << std::endl;
        return (0);
    }
    
    // ----------------   Replace Strings with File --------------------- //

    std::string s1 = std::string(argv[2]);
    std::string s2 = std::string(argv[3]);
    std::fstream file(argv[1], std::ios::in);

    if (!file.is_open())
        return (0);
    
    size_t pos;
    std::string line;
    std::string buf;
    while (getline(file, line))
    {
        if ((pos = line.find(s1, 0)) != std::string::npos) // if not found == nops max size_t
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
        }
        buf.append(line);
        if (!file.eof())
            buf.append("\n");
    }
    file.close();
    file.open(argv[1], std::ios::out | std::ios::trunc);
    file << buf;
    file.close();
    return (0);
}