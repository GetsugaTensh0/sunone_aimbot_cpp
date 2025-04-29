#ifndef DIRECTHIDCONNECTION_H
#define DIRECTHIDCONNECTION_H

#include <Mouse.h>

class DirectHIDConnection {
public:
    DirectHIDConnection();
    void move(int x, int y);
    void press();
    void release();
};

#endif // DIRECTHIDCONNECTION_H
