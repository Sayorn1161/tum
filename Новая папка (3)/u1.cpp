#pragma once

class Unit {
public:
    Unit(int x, int y, int health);


    int getX() const;
    int getY() const;

    void setPosition(int x, int y);

    int getHealth() const;


    void setHealth(int health);

private:
    int x_;   
    int y_;    
    int health_;  
