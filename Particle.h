//
// Created by manish on 17/05/17.
//

#ifndef SDL_TEST_PARTICLE_H
#define SDL_TEST_PARTICLE_H

namespace GraphicsProgram {
    struct Particle {
        double m_x;
        double m_y;
//        double m_xspeed;
//        double m_yspeed;
    private:
        double m_speed;
        double m_direction;
        void init();


    public:
        Particle();

        virtual ~Particle();

        void update(int interval);


    };
}


#endif //SDL_TEST_PARTICLE_H
