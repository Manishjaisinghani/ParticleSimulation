//
// Created by manish on 17/05/17.
//

#ifndef SDL_TEST_SWORM_H
#define SDL_TEST_SWORM_H

#include "Particle.h"

namespace GraphicsProgram {
    class Sworm {
    private:
        Particle *m_pParticles;
        int lastTime;
    public:
        const static  int NPARTICLES = 5000;
        Sworm();
        virtual ~Sworm();
        void update(int elapsed);

        const Particle * const getParticles(){ return  m_pParticles;};

    };
}


#endif //SDL_TEST_SWORM_H
