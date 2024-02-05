#pragma once

#include "common.h"

using namespace std;

class Canvas
{
public:
    int _width;
    int _height;
    Food _dirt;
    Snake _nhoca;
    Canvas(int width, int height) : _width(width+2), _height(height), _nhoca((width+2)/2, height/2), _dirt(width+2, height) {};
    ~Canvas(){};

    void draw(){
        
        // Sort food position if is the 
        while(_dirt._posX == _nhoca._posX && _dirt._posY == _nhoca._posY){
            randomDirtPosition();
        }

        // Draw top window
        for (size_t i = 0; i < _width; i++)
        {
            if (i==0 || i==_width-1)
            {
                cout << "|";
            }else{
                cout << "—";
            }
        }
        cout << endl;
        
        // Draw left and right side window
        for (size_t i = 0; i < _height; i++)
        {
            for (size_t j = 0; j < _width; j++)
            {
                if (j==0 || j==_width-1)
                {
                    cout << "|";
                }else{
                    if(i==_nhoca._posY && j==_nhoca._posX){
                        cout << "o";
                    }else if(i==_dirt._posY && j==_dirt._posX){
                        cout << "□";
                    }else{
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
        
        // Draw bottom window
        for (size_t i = 0; i < _width; i++)
        {
            if (i==0 || i==_width-1)
            {
                cout << "|";
            }else{
                cout << "—";
            }
        }
        cout << endl;
    };

    void updateDraw(){
        
    }

    void randomDirtPosition(){
        _dirt._posX = _dirt.getRandomX();
        _dirt._posY = _dirt.getRandomY();
    }
};