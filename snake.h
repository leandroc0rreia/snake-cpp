#include "common.h" 

class Snake
{
    
public:
    int _points = 0;
    int _size;
    int _posX;
    int _posY;
    int _width;
    int _height;
    
    Snake(int width, int height) : _width(width), _height(height) {
        srand(time(NULL));
        _posX = width/2;
        _posY = height/2;
    };
    ~Snake(){};

    void updatePosition(){

    }
};