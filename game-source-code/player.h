#ifndef PLAYER_H
#define PLAYER_H
#include "Entity.h"
#include <SFML/Audio.hpp>

class Player : public Entity
{
    public:
        Player();   //Constructor
        Player(float xInitial, float yInitial);
        virtual ~Player();  //Destructor
        void processEvents(sf::Keyboard::Key key, bool checkPressed, bool gameFinished);  //Member function to act on user input
        void movePlayer(int enemyVelocity);    //Member function to move the position of the player.
        void setLanded(bool state){landed=state;};
        bool getLanded(){return landed;};
        void setFloorMomentum(float x){floorMomentum=x;};
        bool getGrounded(){return grounded;};
        void drawLives(sf::RenderWindow& window);
        void loadFont();
        void freezeDeath() ;
        bool checkDeath();
        int getLives(){return lives;};
        void resetPlayer(bool life);
        bool getGameWon(){return gameWon;};
        void loadTexture(string name);
    protected:

    private:
        void checkXBoundary();    //Function to check not out of bounds in horizontal direction
        void checkYBoundary();    //Function to check not out of bounds in vertical direction
        bool grounded;     //grounded as a boolean to know if in air vs ground
        int ticks;         //ticks to count jumping time.
        bool landed;              //Variable that stores the state of whether the player has landed on an Ice block.
        float floorMomentum=0;    //Momentum of the floor that the player stands on to adjust momentum to that.
        void finishGame();
        int lives;
        sf::Font playerFont;
        sf::Text playerText;
        bool rightFacing = true;
        bool gameWon = false;
        sf::SoundBuffer buffer;
        sf::Sound jumpSound;
        sf::Texture texture;
        int animated = 0;
};

#endif // PLAYER_H
