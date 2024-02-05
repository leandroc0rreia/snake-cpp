#pragma once

#include "common.h"

using namespace std;

class Food
{
public:
    int _posX;
    int _posY;
    int _width;
    int _height;
    bool _isEaten = false;

    Food(int width, int height) : _width(width), _height(height){
        _posX = getRandomX();
        _posY = getRandomY();
    };
    ~Food(){};
    

    vector<int> randomPosition(){
        srand(time(NULL));
        vector<int> result;
        _posX = (rand()%(_width-2))+1;
        _posY = (rand()%_height-1)+1;
        _isEaten = false;
        return {_posX, _posY};
    }

    int getRandomX(){
        srand(time(NULL));
        _posX = (rand()%(_width-2))+1;
        return (rand()%(_width-2))+1;
    }

    int getRandomY(){
        srand(time(NULL));
        _posY = (rand()%_height-1)+1;
        return (rand()%_height-1)+1;
    }
};

