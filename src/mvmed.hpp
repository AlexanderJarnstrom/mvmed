#ifndef MVMED
#define MVMED

#include <string>
#include <vector>
#include <filesystem>

#define TYPE_FILE 1
#define TYPE_DIR 0

struct mvmed_config
{
    std::filesystem::path from_show_dir;
    std::filesystem::path from_movie_dir;
    std::filesystem::path to_show_dir;
    std::filesystem::path to_movie_dir;
    std::filesystem::path out_show_dir;
    std::filesystem::path out_movie_dir;
    std::filesystem::path in_show_dir;
    std::filesystem::path in_movie_dir;
};

class mvmed
{
private:
    const mvmed_config *conf;

    void scan_for_entries(const std::filesystem::path &path, std::vector<std::filesystem::path> &entries, const int &type);

public:
    mvmed(const mvmed_config *conf);
    ~mvmed();

    void run();
};

#endif