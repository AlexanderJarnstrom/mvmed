#ifndef MVMED
#define MVMED

#include <string>
#include <vector>
#include <filesystem>

struct mvmed_config {
    std::filesystem::path from_show_dir;
    std::filesystem::path from_movie_dir;
    std::filesystem::path to_show_dir;
    std::filesystem::path to_movie_dir;
    std::filesystem::path out_show_dir;
    std::filesystem::path out_movie_dir;
    std::filesystem::path in_show_dir;
    std::filesystem::path in_movie_dir;
};

class mvmed {
    private:
        const mvmed_config* conf;

        void scan_for_dirs(const std::filesystem::path& path, std::vector<std::filesystem::path>& dirs);

    public:
        mvmed(const mvmed_config* conf);
        ~mvmed();

        void run();
};

#endif