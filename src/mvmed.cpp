#include "mvmed.hpp"
#include <iostream>
#include <filesystem>

void mvmed::scan_dir(const char* path)
{
    // TODO: Log error.
    if (path == nullptr)
        return;

    namespace fs = std::filesystem;

    for (const auto& entry : fs::directory_iterator(path))
        std::cout << entry.is_directory() << std::endl;
}

mvmed::mvmed(const mvmed_config *conf) : conf(conf)
{
    scan_dir(conf->from_dir);
}

mvmed::~mvmed()
{ 
}

void mvmed::run()
{
    // TODO: should probably set a condition.
    while (true) {

    }
}
