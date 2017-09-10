#include <iostream>
#include <SDL.h>
#include <math.h>
#include "Screen.h"
#include "Sworm.h"

using namespace std;
using namespace GraphicsProgram;
int main() {

    srand(time(NULL));
    Screen screen;

    if (screen.init() == false){
        cout << "error initializing sdl" << endl;
    }

    bool quit = false;

    Sworm sworm;

    while(true){
        //update particles
        //draw particles


        int elapsed = SDL_GetTicks();

//        screen.clear();
        sworm.update(elapsed);

        unsigned char green = (unsigned char)((1 + sin(elapsed * 0.001)) * 128);
        unsigned char red = (unsigned char)((1 + sin(elapsed * 0.002)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.003)) * 128);

        const Particle * const pParticles = sworm.getParticles();
        for (int p = 0;p<Sworm::NPARTICLES;p++){
            Particle particle = pParticles[p];

            int x = (int)((particle.m_x + 1) * Screen::SCREEN_WIDTH/2);
            int y = (int)(particle.m_y * Screen::SCREEN_WIDTH/2 + Screen::SCREEN_HEIGHT/2);

            screen.setPixel(x,y,red,green,blue);
        }

        //check for messages/events

        screen.boxBlur();
        //draw screen
        screen.update();

        if (screen.processEvents() == false){
            break;
        }

    }

    screen.close();

    return 0;
}