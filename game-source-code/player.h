#ifndef PLAYER_H
#define PLAYER_H
#include "entity.h"

class Player : public Entity
{
    public:
        Player();   //Constructor
        Player(float xInitial, float yInitial);
        virtual ~Player();  //Destructor
        void processEvents(sf::Keyboard::Key key, bool checkPressed);  //Member function to act on user input
        void movePlayer();    //Member function to move the position of the player.
        void setLanded(bool state){landed=state;};
        bool getLanded(){return landed;};
    protected:

    private:
        void checkXBoundary();    //Function to check not out of bounds in horizontal direction
        void checkYBoundary();    //Function to check not out of bounds in vertical direction
        bool landed;              //Variable that stores the state of whether the player has landed on an Ice block.
        float floorMomentum=0;    //Momentum of the floor that the player stands on to adjust momentum to that.
};

#endif // PLAYER_H
