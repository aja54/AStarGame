#include "menu.h"
#include "entity.h"

class GameInterface
{
    public:
        Camera * camera;

        sf::Font * font;

        sf::RectangleShape background;

        //Portrait
        GameObj * displayObj;
        Anim portrait;
        sf::RectangleShape healthBar;
        sf::RectangleShape maxHealthBar;
        sf::Text healthText;
        sf::Text nameText;

        //Other unit stats

        GameInterface( Camera * cam, sf::Font * f );

        void selectUnit( GameObj * obj = NULL );
        void update();
        void draw();
};
