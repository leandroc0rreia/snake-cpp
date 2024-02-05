#include "common.h"

using namespace std;

Canvas campo(40, 20);
SniffInputs sniffer;

void start_game()
{
    cout << "3" << endl;
    usleep(1000000);
    cout << "2" << endl;
    usleep(1000000);
    cout << "1" << endl;
    usleep(1000000);

    while (true)
    {
        system("clear");
        sniffer.changeDirection();
        campo.draw();
        usleep(5000000);
    }
}

void game_over(){
    cout << "GAME OVER BRITNEY!" << endl;
}

int main(int argc, char const *argv[])
{
    start_game();

    return 0;
}
