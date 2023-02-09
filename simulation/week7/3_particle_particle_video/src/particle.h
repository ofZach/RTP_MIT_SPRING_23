#ifndef PARTICLE_H
#define PARTICLE_H

#include "ofMain.h"


class particle
{
    public:
        ofPoint pos;
        ofPoint vel;
        ofPoint frc;   // frc is also know as acceleration (newton says "f=ma")
		
		float radius;
	
		unsigned int bitFlagW;
		unsigned int bitFlagH;
	
        particle();
		virtual ~particle(){};

        void resetForce();
		void addForce(float x, float y);
		void addRepulsionForce(float x, float y, float radius, float scale);
		void addAttractionForce(float x, float y, float radius, float scale);
		void addRepulsionForce(particle &p, float radius, float scale);
		void addAttractionForce(particle &p, float radius, float scale);
		
		void addDampingForce();
        
		void setInitialCondition(float px, float py, float vx, float vy);
        void update();
        void draw();
	
		void bounceOffWalls();
	
	
		float damping;

    protected:
    private:
};

#endif // PARTICLE_H
