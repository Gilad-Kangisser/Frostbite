#ifndef ICELEVELS_H
#define ICELEVELS_H
#include <vector>
#include "IceRow.h"

class IceLevels
{
    public:
        IceLevels();
        virtual ~IceLevels();
        void drawInWindow(sf::RenderWindow &window); // render each Ice in the window.
        void movePosition(); //move all Ice blocks.
        void loadTexture(sf::Texture& texture, string name); //load the texture for each element of Ice.
    protected:

    private:
        vector<IceRow> iceLevels; //create a vector of IceRow objects to form the IceLevels.
};

#endif // ICELEVELS_H