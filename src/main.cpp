#include "mvmed.hpp"

int main(int argc, char const *argv[])
{
    mvmed_config conf;

    conf.out_show_dir = "in/";

    mvmed mover(&conf);
    return 0;
}
