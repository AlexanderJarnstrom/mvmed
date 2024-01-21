#include "mvmed.hpp"
#include <iostream>
#include <filesystem>

void mvmed::scan_for_dirs(const std::filesystem::path& path, std::vector<std::filesystem::path>& dirs)
{
    namespace fs = std::filesystem;

    //TODO: handle error
    if (!fs::is_directory(path))
        return;

    for (auto& entry : fs::directory_iterator(path))
        if (entry.is_directory())
            dirs.push_back(entry.path());
}

mvmed::mvmed(const mvmed_config *conf) : conf(conf)
{
    std::vector<std::filesystem::path> dirs;

    scan_for_dirs(conf->in_movie_dir, dirs);

    for (auto& dir : dirs) 
        std::filesystem::copy(dir, this->conf->in_movie_dir);
}

mvmed::~mvmed()
{ 
}

void mvmed::run()
{
    // TODO: should probably set a condition.
    while (true) {
        // Check qBit output
        // if new show, create show dir in jellyfin dir
        // move show files to handbrake show in.
        // movie just move it to handbrake in for movies.
        // when done move out put to jellyfin movie folder. 
    }
}
