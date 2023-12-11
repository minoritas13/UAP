
#include <ncurses/ncurses.h>


class Player {

public:
    int x, y, height;

    Player(int x, int y);
    int getX() { return x; }
    int getY() { return y; }
    int getHeight() { return height; }

    void setX(int a) {
        x = a;
    }
    void setY(int a) {
        y = a;
    }

    void drawPlayer(int y, int x)
    {
        mvaddch(y + 2, x, ' ');
        mvaddch(y + 1, x, ' ');
        mvaddch(y, x, ' ');
        mvaddch(y - 1, x, ' ');
        mvaddch(y - 2, x, ' ');
    }


};


