#include "mvmed.hpp"
#include <filesystem>

int main(int argc, char const *argv[])
{
    mvmed_config conf;

    conf.in_movie_dir = std::filesystem::path("in/");

    mvmed mover(&conf);
    return 0;
}
