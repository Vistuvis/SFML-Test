#include "location.h"

location::location(int id, int x, int y)
{
    LOC_ID = id + 100;
    location::assign_x(x);
    location::assign_y(y);
    location_type = grassland;
}

void location::assign_x(unsigned int x){

    x_location = x;
}
void location::assign_y(unsigned int y){

    y_location = y;
}
int location::getX(){
        return x_location;
}
int location::getY(){
        return y_location;

}

int location::getloc_type()
{
    return location_type;
}



void location::test(){
    std::cout << "location id: " << LOC_ID << "\n" << x_location << "," << y_location << "\n";

}
