//
// Created by manish on 17/05/17.
//

#include "Sworm.h"


namespace GraphicsProgram {

    Sworm::Sworm(): lastTime(0) {
        m_pParticles = new Particle[NPARTICLES];
}

    Sworm::~Sworm() {

        delete [] m_pParticles;

    }

    void Sworm::update(int elapsed) {

        int interval = elapsed - lastTime;
        for (int p = 0;p<Sworm::NPARTICLES;p++){
            m_pParticles[p].update(interval);

        }
        lastTime = elapsed;
    }
}