//
// Created by manish on 17/05/17.
//

#ifndef SDL_TEST_SCREEN_H
#define SDL_TEST_SCREEN_H
#include <SDL.h>
namespace GraphicsProgram {


    class Screen {
    public:
        static const int SCREEN_WIDTH = 800;
        static const int SCREEN_HEIGHT = 600;
    private:
        SDL_Window *m_window;
        SDL_Renderer * m_renderer;
        SDL_Texture * m_texture;
        Uint32 * m_buffer1;
        Uint32 * m_buffer2;
    public:
        Screen();
        bool init();
        bool processEvents();
        void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue );
        void close();
        void update();
//        void clear();
        void boxBlur();


    };


}


#endif //SDL_TEST_SCREEN_H
