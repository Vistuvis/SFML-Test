#ifndef LOCATION_H
#define LOCATION_H
#include <iostream>

enum loc_type{

grassland,
forest,
mountain,
water

};


class location
{
    public:
        location(int id, int x, int y);
        void assign_x(unsigned int x);
        void assign_y(unsigned int y);
        int getX();
        int getY();
        int getloc_type();
        void test();

    protected:

    private:
     unsigned   int x_location = 0;
     unsigned   int y_location = 0;
     unsigned   int LOC_ID = 100;
     loc_type location_type;
};

#endif // LOCATION_H
