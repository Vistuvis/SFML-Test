#ifndef WORLD_H
#define WORLD_H
#include <location.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


class world
{
    public:
        world(int x, int y);
        void peak();
        void build_locations();
        void LocationsToFile();
        int getsize();
        int get_x(int i);
        int get_y(int i);
        int get_type(int i);
    protected:

    private:
        std::vector<location> loc_container {};

        int MAPSIZE_X;
        int MAPSIZE_Y;
};

#endif // WORLD_H
