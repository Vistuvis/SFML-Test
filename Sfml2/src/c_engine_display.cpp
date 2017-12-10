#include "c_engine_display.h"
#include "world.h"

c_engine_display::c_engine_display()
{


}


void c_engine_display::displayWindow(){
    world NewWorld(5,5);

    sf::RenderWindow window(sf::VideoMode(1024, 1024), "Nope, son!");
    window.setFramerateLimit(60);
    char movement;


    sf::Texture city_texture;
    if (!city_texture.loadFromFile("sprites/City.png"))
    {
        //SFML has its own generic image loading error
    }
    sf::Texture grass_texture;
    if (!grass_texture.loadFromFile("sprites/Grass.png"))
    {
        //""
    }

    sf::Sprite city_sprite;
    city_sprite.setTexture(city_texture);
    sf::Sprite grass_sprite;
    grass_sprite.setTexture(grass_texture);

    city_sprite.setPosition(10,10);

    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            {

                movement = 'u';
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            {
               movement = 'd';
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            {
                movement = 'r';
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            {
                movement = 'l';
            }
            else if (event.type == sf::Event::KeyReleased){
                movement = 'n';
            }

        }

        switch (movement){
            case 'u':
                city_sprite.move(0,-10);
                std::cout<<"up";
                break;

            case 'd':

                city_sprite.move(0,10);
                std::cout<<"down";
                break;

            case 'r':

                city_sprite.move(10,0);
                std::cout<<"Right";
                break;

            case 'l':

                city_sprite.move(-10,0);
                std::cout<<"Left";
                break;
            }

        window.clear();
        for(int i = 0; i<=NewWorld.getsize(); i++)
        {
            switch (NewWorld.get_type(i))
            {
                case 0:
                grass_sprite.setPosition(NewWorld.get_x(i)*32, NewWorld.get_y(i)*32);
                window.draw(grass_sprite);
                //std::cout<<"/n X:"<<NewWorld.get_x(i)<<" Y:"<<NewWorld.get_y(i)<<"\n";
            }
        }

        /*if(clock2.restart()>=time2){ */

        window.draw(city_sprite);
        /*}
        if(clock.restart()>=time1){*/window.display();//}
    }
}
