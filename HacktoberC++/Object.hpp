#ifndef Object_h
#define Object_h

#include "util.hpp"

class Object
{
private:
    Vec2 pos;
    Vec2 vel;
    double speed;
public:
    // Mutators
    void setPos(Vec2 pos) { this->pos = pos; }
    void setVel(Vec2 vel) { this->vel = vel; }
    void setSpeed(double speed) { this->speed = speed; }
    
    // Accessors
    Vec2 getPos() const { return pos; }
    Vec2 getVel() const { return vel; }
    double getSpeed() const { return speed; }
    
    // Client Functions
    virtual void update(double dt, sf::RenderWindow& window)
};

#endif /* Object_h */
