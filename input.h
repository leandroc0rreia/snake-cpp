#include "common.h"

using namespace std;

enum Direction{
    LEFT,
    UP,
    RIGHT,
    DOWN
};


class SniffInputs
{
public:
    
    char currentMovement = 's';
    
    SniffInputs(){};
    ~SniffInputs(){};

    void changeDirection(){
        currentMovement = getchar();
        cout << currentMovement << endl;
    }

};