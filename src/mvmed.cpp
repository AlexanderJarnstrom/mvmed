#include "mvmed.hpp"
#include <iostream>
#include <filesystem>

void mvmed::scan_for_entries(const std::filesystem::path &path, std::vector<std::filesystem::path> &entries, const int &type)
{
    namespace fs = std::filesystem;

    // TODO: handle error
    if (!fs::is_directory(path))
        return;

    for (auto &entry : fs::directory_iterator(path))
        if (type == TYPE_DIR && entry.is_directory())
            entries.push_back(entry.path());
        else if (type == TYPE_FILE && entry.is_regular_file())
            entries.push_back(entry.path());
}

mvmed::mvmed(const mvmed_config *conf) : conf(conf)
{
    std::vector<std::filesystem::path> dirs;

    scan_for_entries(conf->in_movie_dir, dirs, TYPE_FILE);
}

mvmed::~mvmed()
{
}

void mvmed::run()
{
    // TODO: should probably set a condition.
    while (true)
    {
        // Check qBit output
        // if new show, create show dir in jellyfin dir
        // move show files to handbrake show in.
        // movie just move it to handbrake in for movies.
        // when done move out put to jellyfin movie folder.
    }
}
