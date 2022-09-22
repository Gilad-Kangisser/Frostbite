#ifndef ICEROW_H
#define ICEROW_H
#include "Ice.h"
#include <vector>

class IceRow
{
    public:
        IceRow(float level, int iVelocity);
        virtual ~IceRow();
        void drawInWindow(sf::RenderWindow &window); // function to render each ice block in the row to the window.
        void movePosition();                         // move each ice block in the row.
        void loadTexture(sf::Texture& texture, string name); //load the ice block image to each ice block in the row.
    protected:

    private:
        vector<Ice> iceRow; //create a vector of Ice objects to form the IceRow.
        int num=3;          //number of ice blocks in a row.
};

#endif // ICEROW_H
