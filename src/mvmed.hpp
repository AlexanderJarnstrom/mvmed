#ifndef MVMED
#define MVMED

#include <string>

struct mvmed_config {
    const char* from_dir;
    const char* to_dir;
    const char* out_show_dir;
    const char* out_movie_dir;
    const char* in_show_dir;
    const char* in_movie_dir;
};

class mvmed {
    private:
        const mvmed_config* conf;

        void scan_dir(const char* path);

    public:
        mvmed(const mvmed_config* conf);
        ~mvmed();

        void run();
};

#endif